

#include "b_hash.h"
#include "bloomfilter.h"


int main(){
	int i = 0;
	unsigned char fp[20] = {0xd7, 0x2b,0x14, 0xeb ,0xfb ,0x3e ,0xc4, 0xf6, 0x7d, 0x9b, 0xd9, 0xc9, 0x7c, 0x16, 0xcc, 0x9e, 0x78, 0x51, 0xc2, 0xd6,};
	int vector[128];
	for(i = 0; i< 128; i++)
		vector[i] = 0xffffffff;

	BLOOM *bloom= bloom_create(4096, 3, BKDRHash, SDBMHash, DJBHash);	
	
	bloom_update(bloom , (unsigned char *)vector);

	int res = bloom_check(bloom, "hello", 5);
	printf("bloom check res : %d\n", res);
	
	return 0;
}

