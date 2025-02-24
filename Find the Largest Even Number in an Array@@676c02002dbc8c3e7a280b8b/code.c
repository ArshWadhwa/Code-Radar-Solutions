#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int m= arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>m && arr[i]%2==0){
            m=arr[i];
        }else{
            m=-1;
        }
    }
    printf("%d",m);

}