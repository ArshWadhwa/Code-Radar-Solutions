#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    a^=(1<<b);

    printf("%d",a);
    // 0101 
    // 8421
}