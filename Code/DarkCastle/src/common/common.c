#include <stdint.h>

uint64_t rotl64(uint64_t a, int b) {
    return ((a << b) | (a >> (64 - b)));
}

uint64_t rotr64(uint64_t a, int b) {
    return ((a >> b) | (a << (64 - b)));
}

uint32_t rotl32(uint32_t a, int b) {
    return ((a << b) | (a >> (32 - b)));
}

uint32_t rotr32(uint32_t a, int b) {
    return ((a >> b) | (a << (32 - b)));
}
