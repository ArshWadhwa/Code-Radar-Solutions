#include <stdio.h>
#include <limits.h>
int revA(int arr[]);
int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mx=arr[n-1];
    printf("%d ",mx);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>mx){
            mx=arr[i];
            revA()
             printf("%d ",mx);
        }
     
    }
  

   
}
int revA(int arr[]){
  int i=0;
    int j=n-1;
    while(i<=j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    return arr;
}


      