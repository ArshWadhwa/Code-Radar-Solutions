#include <stdio.h>
#include <limits.h>

int main() {
    int a,tar;
    scanf("%d %d",&a,&tar);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(int i=0;i<a;i++){
        if(arr[i]==tar){
            c++;
        }
    }
    printf("%d",c);

}