#include <stdbool.h>


bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}


void printPrimesInRange(int a, int b) {
    bool foundPrime = false; 

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i); 
            foundPrime = true; 
        }
    }

    
    if (!foundPrime) {
        printf("No prime numbers");
    }

    printf("\n"); 
}