#include<stdio.h>

int smNum(int arr[], int n){
    int exp=n*(n+1)/2;
    int sm=0;
    for(int i=0;i<n;i++){
        sm+=arr[i];

    }
    if(sm==exp){
        return arr[i]+1;
    }
   
}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("%d",smNum(arr,n));
}   


