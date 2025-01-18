#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    int avg=a+b+c/3;
    printf("Average: %.2f",avg);
}