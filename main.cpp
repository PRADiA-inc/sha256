#include <iostream>
#include <fstream>
#include <string.h>
#include "sha256.h"
 
using namespace std;
 
string
sha256(string input)
{
    unsigned char digest[SHA256::DIGEST_SIZE];
    memset(digest, 0, SHA256::DIGEST_SIZE);

    SHA256 ctx = SHA256();
    ctx.init();
    ctx.update((unsigned char*)input.c_str(), input.length());
    ctx.final(digest);

    char buf[2 * SHA256::DIGEST_SIZE + 1];
    buf[2 * SHA256::DIGEST_SIZE] = 0;
    for (int i = 0 ; i < SHA256::DIGEST_SIZE ; i++) {
        sprintf(buf + i * 2, "%02x", digest[i]);
    }

    return string(buf);
}

int
main(int argc, char* argv[])
{
    string input = "hoge";
    string output1 = sha256(input);
 
    cout << input << ":" << output1 << endl;

    return 0;
}
