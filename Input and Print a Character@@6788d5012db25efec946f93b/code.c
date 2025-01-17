#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    scanf("%s",&c);
    printf("You entered: %s",c);
    return 0;
}