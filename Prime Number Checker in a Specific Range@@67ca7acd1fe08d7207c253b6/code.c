#include <stdbool.h>


bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true; // Prime number
}

// Function to print prime numbers in a given range
void printPrimesInRange(int a, int b) {
    bool foundPrime = false; // Flag to track if any prime number was found

    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Print the prime number
            foundPrime = true; // Set the flag to true
        }
    }

    // If no prime numbers were found, print a message
    if (!foundPrime) {
        printf("No prime numbers in the range [%d, %d]", a, b);
    }

    printf("\n"); // Print a newline at the end
}