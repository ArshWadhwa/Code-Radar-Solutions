#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sm=INT_MAX;
    int ss=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<sm){
            ss=sm;
            sm=arr[i];
        }
        else if(ss>arr[i] && ss!=sm){
            ss=arr[i];
        }
    }
    printf("%d",ss);
}