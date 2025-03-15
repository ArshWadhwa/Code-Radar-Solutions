#include <stdio.h>

int findSmallestMissingPositive(int arr[], int n) {
  
    int actualSum = 0;
    int cnt=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            actualSum += arr[i];
            cnt++;
        }
    }
      int expectedSum = cnt * (cnt + 1) / 2;
    if (expectedSum != actualSum) {
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