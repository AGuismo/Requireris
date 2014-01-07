#include	"AGuismoRequireris.h"
#include	"base32.h"
#include	"hmac.h"
#include	"sha1.h"
#include	<cstring>


#define BITS_PER_BASE32_CHAR      5


int generateCode(const char *key, unsigned long tm) 
{
  unsigned char challenge[8];

  for (int i = 8; i--; tm >>= 8) 
    challenge[i] = tm;

  int secretLen = (strlen(key) + 7)/8*BITS_PER_BASE32_CHAR;

  if (secretLen <= 0 || secretLen > 100) {
    return -1;
  }

  unsigned char secret[100];

  if ((secretLen = base32_decode((const unsigned char *)key, secret, secretLen))<1) {
    return -1;
  }

  unsigned char hash[20];
  hmac_sha1(secret, secretLen, challenge, 8, hash, SHA1_DIGEST_LENGTH);

  int offset = hash[20 - 1] & 0xF;

  unsigned int truncatedHash = 0;
  for (int i = 0; i < 4; ++i) {
    truncatedHash <<= 8;
    truncatedHash  |= hash[offset + i];
  }

  truncatedHash &= 0x7FFFFFFF;
  truncatedHash %= 1000000;
  return truncatedHash;
}