#include <stdio.h>

int main() {
    char c;
    scanf("%d", &c);
    if(c=='A'){
        printf("Excellent");

    }else if(c=='B'){
        printf("Good");

    }else if(c=='C'){
        printf("Average");
    }else if(c=='D'){
        printf("Below Average");
    }else if(c=='F'){
        printf("Fail")
    }else{
        printf("Invalid Grade");
    }
}