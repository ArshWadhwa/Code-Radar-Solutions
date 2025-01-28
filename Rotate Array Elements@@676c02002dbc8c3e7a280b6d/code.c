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
   int start=0;
   int end=s-1;

   while(start<=k){
    int temp=arr[k];
    arr[k]=arr[start];
    arr[start]=temp;
    start++;
   }
   int start=k;
   int end=s-1;
   while(k<=end){
    int temp=arr[end];
    arr[k]=arr[end];
    arr[end]=temp;

    end++;
   }
   while(start<=end){
    int temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    start++;
    end--;
    

   }


   












  


}