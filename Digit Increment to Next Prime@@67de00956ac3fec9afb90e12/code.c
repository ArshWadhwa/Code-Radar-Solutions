#include <stdio.h>


int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

// Function to find the next prime number greater than or equal to `digit`
int nextPrime(int digit) {
    while (!isPrime(digit)) {
        digit++;  
    }
    return digit;
}


int incrementToPrimeDigits(int N) {
    int temp = N, cnt = 0;


    while (temp != 0) {
        temp /= 10;
        cnt++;
    }

    int arr[cnt]; 
    int l = cnt - 1;


    while (N > 0) {
        arr[l] = N % 10;
        N /= 10;
        l--;
    }


    for (int i = 0; i < cnt; i++) {
        arr[i] = nextPrime(arr[i]);
    }

    // Convert modified array back to an integer
    int newNumber = 0;
    for (int i = 0; i < cnt; i++) {
        newNumber = newNumber * 10 + arr[i];
    }

    return newNumber;
}
