#include <stdio.h>


int main() {
    int year;
   scanf("%d",&year);
   year%5==0 && year%11==0 ? printf("Leap Year") : printf("Not a Leap Year");
}