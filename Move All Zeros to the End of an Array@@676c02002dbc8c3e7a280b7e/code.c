#include <stdio.h>


int main() {
    int n;

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]==0){
            continue;

        }
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
          i++;
    }
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}