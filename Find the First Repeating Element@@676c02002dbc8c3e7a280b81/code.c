#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fnd=-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]==arr[j]){
                fnd=1;
                printf("%d",arr[i]);
                break;
            }
            
        }
        printf("%d",fnd);

     
    }

   
    
}

