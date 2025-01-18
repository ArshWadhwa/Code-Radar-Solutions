#include <stdio.h>


int main() {
    int ch;
    scanf("%c",ch)
    if (ch=="%C"){
        printf("Uppercase");
    }else if(ch=="%c"){
        printf("Lowercase");

    }else{
        printf("Not an alphabet");
    }
}