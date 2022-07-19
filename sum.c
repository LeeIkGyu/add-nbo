// sum.cpp
#include "sum.h"
#include <stdio.h>
#include <stdint.h>

void sum(uint32_t n1, uint32_t n2){
	uint32_t sum_n = n1 + n2;
	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", n1, n1, n2, n2, sum_n, sum_n);
}
