#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int i=0;
    int j=1;
    while(i<j){
        if(arr[i]==arr[j]){
            printf("%d",arr[i]);
            return 0;
        }else{
            continue;
        }
    j++;
    i++;
        
    }
    
}