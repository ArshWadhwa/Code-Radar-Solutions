#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int bt=a&0;
    bt==1 ? printf("Set") : printf("Not Set");
}