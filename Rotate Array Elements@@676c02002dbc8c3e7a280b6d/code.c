#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);

  

    k = k % s; // Normalize k
    int arr[s];

    // Input array elements
    for (int i = 0; i < s; i++) {
        scanf("%d", &arr[i]);
    }
    
      int k;
    scanf("%d", &k);

    // Reverse the whole array
    int start = 0, end = s - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Reverse the first k elements
    start = 0;
    end = k - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Reverse the remaining elements
    start = k;
    end = s - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print the rotated array
    for (int i = 0; i < s; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
