#include <stdio.h>


int main() {
     int a;
    scanf("%d", &a);
    int num_bits=sizeof(int)*8;
     // Shift 1 to the left by (num_bits - 1) to get the MSB mask
    int msb_mask = 1 << (num_bits - 1);

    // Check if the MSB is set
    if (a & msb_mask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
    }