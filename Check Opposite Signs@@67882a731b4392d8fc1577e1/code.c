#include <stdio.h>


int main() {
    int a;
   int b;
   scanf("%d %d",&a,&b);
   a>0 && b<0 || a<0 && b>0 ? printf("True") : printf("False");
}