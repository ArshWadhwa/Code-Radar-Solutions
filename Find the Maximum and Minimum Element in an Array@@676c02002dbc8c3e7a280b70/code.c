#include <stdio.h>


int main() {
    int n;
    scanf("%d\n",&n);

    int arr[n];

    for(int i=0;i<arr.length;i++){
       scanf("%d ",&arr[i]);
    }
    int mx=arr[0];
    int mn=arr[0];
    for(int i=0;i<arr.length-1;i++){
        if(arr[i]>mx){
            printf("%d",mx);
        }
        if(arr[i]<mn){
            printf("%d",mn);
        }
    }
}