#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx=arr[n-1];
    printf("%d ",mx);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>mx){
            mx=arr[i];
             printf("%d ",mx);
        }
     
    }
      

   
}