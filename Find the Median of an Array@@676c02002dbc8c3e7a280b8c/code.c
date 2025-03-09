#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }


       if(a%2!=0){
        int md=arr[a/2];
        printf("%d",md);

    }
        if(a%2==0){
            int md2=arr[a/2-1]+arr[a/2];
            printf("%d",md2/2);
        }
    
    

}