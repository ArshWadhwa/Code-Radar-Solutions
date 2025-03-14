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
    int ss=INT_MAX;
    for(int i=0;i<n;i++){
        
        if(arr[i]<sm){
            ss=sm;
            sm=arr[i];

        }
        
        else if(sm<arr[i] && ss>arr[i] ){
            if(sm==ss){
                ss=-1;
            }
            ss=arr[i];

        }

    }
    printf("%d",ss);
}