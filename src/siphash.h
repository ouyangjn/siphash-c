#ifndef CSIPHASH_SIPHASH_H
#define CSIPHASH_SIPHASH_H

#include <inttypes.h>

extern uint64_t siphash(char key[16], char data[], int c, int d);
//extern uint64_t siphash_with_keys(char k0[16], char k1[16], char k2[16], char k3[16], char data[], int c, int d);
//extern uint64_t siphash_with_keys(uint64_t v0, uint64_t v1, uint64_t v2, uint64_t v3, char data[], int c, int d);
uint64_t siphash24(uint64_t v0, uint64_t v1, uint64_t v2, uint64_t v3, uint64_t m);
#endif
