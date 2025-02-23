#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int y=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] || arr[i]<arr[i-1]){
        
            y=1;

        }else {
            y=0;
        }
    }

    if(y==1){
        printf("YES");
    }else{
    printf("NO");
    }

}