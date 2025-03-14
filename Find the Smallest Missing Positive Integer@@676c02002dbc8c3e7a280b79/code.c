#include<stdio.h>

int smNum(int arr[], int n){
    int exp=n*(n+1)/2;
    int sm=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
      sm+=arr[i];
        }
  

    }
    if(sm==exp){
        return n+1;
    }
    else{
        return exp-sm;
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


