# C++ sha256 function
SHA-256 is the most popular hash function in the SHA-2 family at the time of writing. It provides 128 bits of security for digital signatures and hash-only applications (SHA-1 provides only 80 bits).

Remember that while MD5 and SHA-1 are both popular hash functions, MD5 is considered completely broken, SHA-1 is considered weak. SHA-2 and its variants are to be crowned the new king. If working on US Government projects, remember that NIST has deprecated SHA-1 in since 2010, and that SHA-2 is considered approved for for new projects.

    # compile
    g++ sha256.cpp main.cpp -o main


