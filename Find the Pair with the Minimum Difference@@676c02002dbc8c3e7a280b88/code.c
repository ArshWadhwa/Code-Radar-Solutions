#include <stdio.h>
#include <limits.h> 
#include <stdlib.h> 
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int num1,num2;
   int mn=INT_MAX;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int diff = abs(arr[j]-arr[i]);
        if(diff <mn){
            mn=diff;
            num1=arr[i];
            num2=arr[j];
        }
    }
   }
   printf("%d %d",num1,num2);
   return 0;
}