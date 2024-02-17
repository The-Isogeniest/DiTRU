#ifndef API_H
#define API_H

#define CRYPTO_SECRETKEYBYTES 222
#define CRYPTO_PUBLICKEYBYTES 1664
#define CRYPTO_CIPHERTEXTBYTES 1664
#define CRYPTO_BYTES 32

#define CRYPTO_ALGNAME "ntru40961109"

#define crypto_kem_keypair CRYPTO_NAMESPACE(keypair)
int crypto_kem_keypair(unsigned char *pk, unsigned char *sk);

#define crypto_kem_enc CRYPTO_NAMESPACE(enc)
int crypto_kem_enc(unsigned char *c, unsigned char *k, const unsigned char *pk);

#define crypto_kem_dec CRYPTO_NAMESPACE(dec)
int crypto_kem_dec(unsigned char *k, const unsigned char *c, const unsigned char *sk);

#endif
