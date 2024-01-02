/*
* This file is automatically generated upon running
* `RUST_GENERATE_BINDINGS=1 cargo +nightly build`. Do not modify by hand.
*/

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

void adler_rs(const void *blob, int len, unsigned int seed, void *out);

void ahash_rs(const void *blob, int len, unsigned int seed, void *out);

void ascon_rs(const void *blob, int len, unsigned int seed, void *out);

void ascona_rs(const void *blob, int len, unsigned int seed, void *out);

void blake2b512_rs(const void *blob, int len, unsigned int seed, void *out);

void blake2s256_rs(const void *blob, int len, unsigned int seed, void *out);

void blake3_rs(const void *blob, int len, unsigned int seed, void *out);

void crc32fast_rs(const void *blob, int len, unsigned int seed, void *out);

void fnvhash_rs(const void *blob, int len, unsigned int seed, void *out);

void fxhash32_rs(const void *blob, int len, unsigned int seed, void *out);

void fxhash64_rs(const void *blob, int len, unsigned int seed, void *out);

void hash_hasher_rs(const void *blob, int len, unsigned int seed, void *out);

void nthash_rs (const void *blob, int len, unsigned int seed, void *out);

void highway_rs(const void *blob, int len, unsigned int seed, void *out);

void md5_rs(const void *blob, int len, unsigned int seed, void *out);

void ripemd128_rs(const void *blob, int len, unsigned int seed, void *out);

void ripemd160_rs(const void *blob, int len, unsigned int seed, void *out);

void ripemd256_rs(const void *blob, int len, unsigned int seed, void *out);

void ripemd320_rs(const void *blob, int len, unsigned int seed, void *out);

void sha1_rs(const void *blob, int len, unsigned int seed, void *out);

void sha224_rs(const void *blob, int len, unsigned int seed, void *out);

void sha256_rs(const void *blob, int len, unsigned int seed, void *out);

void sha384_rs(const void *blob, int len, unsigned int seed, void *out);

void sha512_rs(const void *blob, int len, unsigned int seed, void *out);

void sha512_224_rs(const void *blob, int len, unsigned int seed, void *out);

void sha512_256_rs(const void *blob, int len, unsigned int seed, void *out);

void cshake128_rs(const void *blob, int len, unsigned int seed, void *out);

void cshake256_rs(const void *blob, int len, unsigned int seed, void *out);

void keccak224_rs(const void *blob, int len, unsigned int seed, void *out);

void keccak256_rs(const void *blob, int len, unsigned int seed, void *out);

void keccak256full_rs(const void *blob, int len, unsigned int seed, void *out);

void keccak384_rs(const void *blob, int len, unsigned int seed, void *out);

void keccak512_rs(const void *blob, int len, unsigned int seed, void *out);

void sha3_224_rs(const void *blob, int len, unsigned int seed, void *out);

void sha3_256_rs(const void *blob, int len, unsigned int seed, void *out);

void sha3_384_rs(const void *blob, int len, unsigned int seed, void *out);

void sha3_512_rs(const void *blob, int len, unsigned int seed, void *out);

void shake128_rs(const void *blob, int len, unsigned int seed, void *out);

void shake256_rs(const void *blob, int len, unsigned int seed, void *out);

void turboshake128_1f_rs(const void *blob, int len, unsigned int seed, void *out);

void turboshake256_1f_rs(const void *blob, int len, unsigned int seed, void *out);

void twox_xxhash32_rs(const void *blob, int len, unsigned int seed, void *out);

void twox_xxhash64_rs(const void *blob, int len, unsigned int seed, void *out);

void siphash13_rs(const void *blob, int len, unsigned int seed, void *out);

void siphash24_rs(const void *blob, int len, unsigned int seed, void *out);

void siphash128_13_rs(const void *blob, int len, unsigned int seed, void *out);

void siphash128_24_rs(const void *blob, int len, unsigned int seed, void *out);

void whirlpool_rs(const void *blob, int len, unsigned int seed, void *out);

void wyhash_rs(const void *blob, int len, unsigned int seed, void *out);

void xxhash3_rs(const void *blob, int len, unsigned int seed, void *out);

void xxhash128_rs(const void *blob, int len, unsigned int seed, void *out);

void xxhash32_rs(const void *blob, int len, unsigned int seed, void *out);

void xxhash64_rs(const void *blob, int len, unsigned int seed, void *out);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
