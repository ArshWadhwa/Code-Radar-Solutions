#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
     while (a > 1) {
        a >>= 1; 
    }
    a==1 ? printf("Set") : printf("Not Set");
}