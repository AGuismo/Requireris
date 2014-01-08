#include	"AGuismoRequireris.h"
#include	"base32.h"
#include	"hmac.h"
#include	"sha1.h"
#include	<cstring>


int generateCode(const std::string &secret, unsigned long timeStamp) 
{
	int keySize = (secret.size() + 7)/8*5;
	unsigned char challenge[8];
	unsigned char key[100];
	unsigned char hash[20];

	if (keySize <= 0 || keySize > 100)
		return -1;

	if ((keySize = base32_decode((const unsigned char *)secret.c_str(), key, keySize)) < 1)
		return -1;

	for (int i = 8; i--; timeStamp >>= 8) 
		challenge[i] = timeStamp;

	hmac_sha1(key, keySize, challenge, 8, hash, SHA1_DIGEST_LENGTH);

	int offset = hash[20 - 1] & 0xF;
	unsigned int code = 0;

	for (int i = 0; i < 4; ++i)
	{
	    code <<= 8;
		code  |= hash[offset + i];
	}

	code &= 0x7FFFFFFF;
	code %= 1000000;
 
	return code;
}