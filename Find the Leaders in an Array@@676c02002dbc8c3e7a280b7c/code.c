#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    int arr[n], leaders[n], count = 0; 

    int mx = arr[n-1];  
    leaders[count++] = mx;  

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > mx) {
            mx = arr[i];
            leaders[count++] = mx;  
        }
    }

   
    for (int i = count - 1; i >= 0; i--) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
