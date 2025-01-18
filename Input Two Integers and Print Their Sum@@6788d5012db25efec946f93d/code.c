#include <stdio.h>

int sm(int a ,int b){
    int sum=a+b;
    return sum;
}

int main() {
   int a;
   int b;

   scanf("%d %d ",&a,&b);
    printf("Sum: %d",sm(a,b));
}