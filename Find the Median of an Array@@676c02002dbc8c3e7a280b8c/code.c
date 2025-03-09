#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }


       if(cnt%2!=0){
        int md=arr[i/2];
        printf("%d",md);

    }
        if(cnt%2==0){
            int md2=arr[i/2-1]+arr[i/2];
            printf("%d",md2);
        }
    
    

}