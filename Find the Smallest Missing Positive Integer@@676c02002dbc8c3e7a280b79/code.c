#include <stdio.h>


int main() {
     int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }
    int mx=arr[0];
    int mn=arr[0];
    for( int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
        if(arr[i]<mn){
            mn=arr[i];
        }

    }
    int sm=0;
    for(int i=mn;i<=mx;i++){
            sm+=i;
    }
    int sm2=0
    for(int i=0;i<n;i++){
        sm2+=arr[i];
    }

    printf("%d",sm-sm2);
}