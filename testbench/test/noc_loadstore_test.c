//

#include <stdio.h>
#include "noc_sam.h"

#define SN00_SPTR *(int*)(SN00_ADDR_START)
#define SN01_SPTR *(int*)(SN01_ADDR_START)
#define SN10_SPTR *(int*)(SN10_ADDR_START)
#define SN11_SPTR *(int*)(SN11_ADDR_START)
#define SN20_SPTR *(int*)(SN20_ADDR_START)
#define SN21_SPTR *(int*)(SN21_ADDR_START)
#define SN30_SPTR *(int*)(SN30_ADDR_START)
#define SN31_SPTR *(int*)(SN31_ADDR_START)

int main() {
	int sum;

	// Store data to ddr on each sn.
	SN00_SPTR = 100;
	SN01_SPTR = 200;
	SN10_SPTR = 300;
	SN11_SPTR = 400;
	SN20_SPTR = 500;
	SN21_SPTR = 600;
	SN30_SPTR = 700;
	SN31_SPTR = 800;

	// Load from ddr on each sn.
	sum = SN00_SPTR + SN01_SPTR + SN10_SPTR + SN11_SPTR + SN20_SPTR + SN21_SPTR + SN30_SPTR + SN31_SPTR;

	if (sum == 3600) {
		printf("TEST PASSED!");
		return 0;
	} else {
		printf("TEST FAILED!");
		return 1;
	}
}
