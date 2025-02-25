#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int mx=-1;
 
    for(int i=0;i<a;i++){
        if(arr[i]>mx  && arr[i]%2==0){
            mx=arr[i];
        }
        if(arr[i]<mx && arr[i]%2==0){
            mx=arr[i];
        }
    }
    
    printf("%d",mx);

} 