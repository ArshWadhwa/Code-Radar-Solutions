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
            ss=arr[i];
            
        }

    }
    if(ss==INT_MAX){
        printf("-1");
    }else{
    printf("%d",ss);
    }

}