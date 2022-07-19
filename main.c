#include<stdint.h>
#include<stdio.h>
#include<netinet/in.h>
#include<stddef.h>
#include "sum.h"

int main(int argc, char **argv) {
    FILE *fp1 = fopen(argv[1], "r");
    FILE *fp2 = fopen(argv[2], "r");
    uint32_t n1;
    uint32_t n2;

    fread(&n1, sizeof(uint32_t), 1, fp1);
    fread(&n2, sizeof(uint32_t), 1, fp2);
    
    uint32_t num1 = ntohl(n1);
    uint32_t num2 = ntohl(n2);

    sum(num1, num2);
    fclose(fp1);
    fclose(fp2);
    return 0;
}
