#include <stdio.h>



int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int actualSum = 0;
 int expectedSum = n * (n + 1) / 2;
 int cnt=0;
    for (int i = 0; i < n; i++) {
        if(arr[i]==arr[i+1]){
            printf("%d",arr[i]+1);
            return 0;
        }
        if(arr[i]<0){
            printf("1");
            return 0;
        }
        if (arr[i] >0) {
            actualSum += arr[i];
            cnt++;
        }
    }
    
   
         if(cnt==n && n>1){
        printf("%d",n+1);
        return 0;
    }else if(cnt>n && n>1){
        printf("%d",expectedSum-actualSum);
    }
   
    // else if (expectedSum > actualSum) {
    //     printf("%d",);
    }else{
        printf("1");
    }
