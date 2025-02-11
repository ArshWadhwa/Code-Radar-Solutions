#include <stdio.h>



int main() {
     int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }
    int sm=0;
    for(int i=0;i<n;i++){
        sm+=arr[i];
        printf("%d",sm);
    }
}