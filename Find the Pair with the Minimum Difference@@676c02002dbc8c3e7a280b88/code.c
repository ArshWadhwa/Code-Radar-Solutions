#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }

    int i=0;
    int j=n-1;
    int mn=INT_MAX;
    while(i<=j){
        int p=arr[j]-arr[i];
        if(p<mn){
            printf("%d %d",i,j);
            return;


        }
        i++;
        j--;
    }
}