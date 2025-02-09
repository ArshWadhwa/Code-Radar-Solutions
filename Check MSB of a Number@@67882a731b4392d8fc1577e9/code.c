#include <stdio.h>


int main() {
     int a;
    scanf("%d", &a);
    int num_bits=sizeof(int)*8;
    
    int msb_mask = 1 << (num_bits - 1);

    if (a & msb_mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
    }