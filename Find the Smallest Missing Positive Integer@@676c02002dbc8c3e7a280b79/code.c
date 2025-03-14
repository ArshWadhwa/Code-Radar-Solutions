#include <stdio.h>

int findSmallestMissingPositive(int arr[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            actualSum += arr[i];
        }
    }
    if (expectedSum == actualSum) {
        return n + 1;
    } else {
        return expectedSum - actualSum;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", findSmallestMissingPositive(arr, n));
    return 0;
}