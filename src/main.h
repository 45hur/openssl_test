#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/sha.h>

void sha256_hash_string (unsigned char hash[SHA256_DIGEST_LENGTH], char outputBuffer[65]);
void sha256_string(char *string, char *outputBuffer);
int sha256_file(char *path, char *outputBuffer);