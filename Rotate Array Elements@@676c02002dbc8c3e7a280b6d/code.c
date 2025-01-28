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
//reverse purra array
   while(start<=end){
    int temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    start++;
    end--;

   }
// fer reverse till k
int end=k-1;
int start=0;
   while(start<end){
    int temp=arr[end];
    arr[end]=arr[start];
    arr[start]=temp;
    start++;
    end--;
   }
   int start=k;
   int end=s-1;
   while(start<=end){
    int temp=arr[end];
    arr[start]=arr[end];
    arr[end]=temp;
    start++ 
    end++;
   }

for(int i=0;i<s;i++){
    printf("%d\n",arr[i])
}

   












  


}