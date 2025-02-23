#include<stdio.h>
int main(){
 for (int i = 0; i < size; i++) {
        int sm = 0;
        if (arr[i] <= 9 && arr[i] > 0) {
            sm = arr[i];
        } else {
            int num = arr[i];
            while (num > 0) {
                sm += num % 10;
                num /= 10;
            }
        }
        arr[i] = sm;
    }

    // Printing the transformed array
    printf("Transformed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;

}