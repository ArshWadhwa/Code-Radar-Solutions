#include <stdio.h>

int main() {
    int n, i, j, space, count;


    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(space = 1; space <= n - i; space++) {
            printf("   ");
        }

        count = 1; // Start from 1

        // Print the increasing sequence
        for(j = 1; j <= i; j++) {
            printf("%2d", count++);
        }

        // Print the decreasing sequence
        count -= 2; // Adjust count to continue decreasing correctly
        for(j = 1; j < i; j++) {
            printf("%2d", count--);
        }

        printf("\n");
    }
    
    return 0;
}
