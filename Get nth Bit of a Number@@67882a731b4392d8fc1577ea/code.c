#include <stdio.h>


void printBit(int n){
    if(n>1){
        printBit(n/2);
       
    }
}
int main() {
    int n,a;
    scanf("%d %d",&n,&a);


    int athBit=(n>>a)&1;
    printf("%d",athBit);
}