#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
  
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else if(isdigit(ch)){
        printf("Digit");
    }
    else if(ch>='a' && ch<='z'){
        printf("Consonant");
    }else{
        printf("Invalid");
    }
    return 0;
}