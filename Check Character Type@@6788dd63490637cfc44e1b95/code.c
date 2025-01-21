#include <stdio.h>
#include <ctype.h>
int main() {
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
  
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("Vowel");
    }else if(ch>=0 && ch<=100000000){
  printf("Digit");
    }
  
    
    else{
        printf("Consonant");
    }
}