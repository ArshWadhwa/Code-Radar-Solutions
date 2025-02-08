#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }
   int mn=INT_MAX;
   int num1,num2;
   for(int i=0;i<n;i++){
    int p=arr[i+1]-arr[i];
    if(p<mn){
        mn=p;
        num1=arr[i];
        num2=arr[i+1];

    }

   }
   printf("%d %d",num1,num2);
}