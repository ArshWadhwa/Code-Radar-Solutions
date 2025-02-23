#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
   for(int i=0;i<a;i++){
    if(i==0){
        if(arr[i]>arr[i+1]){
            printf("%d",arr[i]);

        }
    }
    else if(i==a-1){
       if(arr[i]>arr[i-1]){
        printf("%d",arr[i]);
       } 
    }else{
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
        }
    }
   }

}