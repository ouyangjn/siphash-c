#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "src/siphash.h"

int main(int argc, char *argv[]){
	uint64_t k0=0x53533d60e0d41298, k1=0x3116f652f9cba8c6, k2=0x80cb3befa9e54287, k3=0x53533d60e0d41298;
	printf("keys: %lx, %lx, %lx, %lx\n", k0, k1, k2, k3);


	// index 0: f6e906900e438a17
        printf("index 0: expect f6e906900e438a17\n");
	printf("output: %" PRIx64 "\n", siphash24(k0, k1, k2, k3, 0));
	//siphash_with_keys(k v0, uint64_t v1, uint64_t v2, uint64_t v3, char data[], int c, int d) {

	// index 1: a9d1cbc3173057f7
        printf("index 1: expect a9d1cbc3173057f7\n");
	printf("output: %" PRIx64 "\n", siphash24(k0, k1, k2, k3, 1));

    return 0;
}
