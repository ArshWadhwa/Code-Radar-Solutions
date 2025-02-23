#include<stdio.h>
int minElement(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int sm = 0;
        if (arr[i] <= 9 && arr[i] > 0) {
            sm = arr[i];
        } else {
            int num = arr[i];
            while (num > 0) {
                int rem = num % 10;
                sm += rem;
                num /= 10;
            }
        }
        arr[i] = sm;
    }


    int mn = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < mn) {
            mn = arr[i];
        }
    }
    return mn;
}