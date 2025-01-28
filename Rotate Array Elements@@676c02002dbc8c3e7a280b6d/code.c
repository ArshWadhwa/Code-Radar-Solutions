#include <stdio.h>


int main() {
   int s;
   scanf("%d",&s);

    int k;
    scanf("%d",&k);
   int arr[s];

   for( int i=0;i<s;i++){
    scanf("%d",&arr[i]);
   }
   int i=0;
   int j=s-1;

   while(i<=k){
    int temp=arr[k];
    arr[k]=arr[i];
    arr[i]=temp;
    i++;
   }
   while(k<=j){
    int temp=arr[j];
    arr[k]=arr[j];
    arr[j]=temp;

    j++;
   }
   while(i<=j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
   }
   

   












  


}