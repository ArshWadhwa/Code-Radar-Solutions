#include <stdio.h>


void printBit(int n){
    if(n>1){
        printBit(n/2);
        printf("%d",n%2)
    }
}


int main() {
    int n,a;
    scanf("%d %d",&n,&a);
    printBit(n);

    int athBit=(n>>a)&1;
}