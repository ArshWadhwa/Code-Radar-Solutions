#include <stdio.h>



int main() {
  int a;
   int b;
   int c;
   scanf("%d %d %d",&a,&b,&c);
    int max= a>b? a:b;
    max=max>c ? max:c;
    printf("%d",max);
}