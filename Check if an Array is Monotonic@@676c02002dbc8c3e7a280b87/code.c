#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int dec=1;
    int inc=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
        
            dec=0;

        }else if(arr[i]<arr[i-1]){
            inc =0;
        }
    
    }

   if (inc || dec) {
        printf("YES");
    } else {
        printf("NO");
    }


}