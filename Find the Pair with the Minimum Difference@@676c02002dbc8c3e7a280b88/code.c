#include <stdio.h>
#include <limits.h> 
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }
   int mn=INT_MAX;
   int i=0;
   int j=1;
   int num1,num2;
  while(j<n){
    int p=arr[j]-arr[i];
    if(p<mn){
        mn=p;
        num1=arr[i];
        num2=arr[j];
       
    }
    i++;
    j++;

  }
    

   
   printf("%d %d",num1,num2);
   return 0;
}