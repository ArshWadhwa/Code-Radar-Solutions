#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


 for (int i = 0; i < n; i++) {
        int sm = 0;
       
        if (arr[i] <= 9 && arr[i] >= 0) {
            sm = arr[i];
        } else  {
            int num = arr[i];
            while (num != 0) {
                sm += num % 10;
                if(sm<0){
                    sm=-sm;
                }
                num /= 10;
            }
        }
        arr[i] = sm;
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


    return 0;

}