#include <stdio.h>
#include <ctype.h> 


int main(){
    char c[1000];
    scanf("%s",&c);
    
    int cnt=0;
     for (int i = 0; c[i] != '\0'; i++) {
        c[i] = tolower(c[i]);  
    }
    int i=0;
     while(c[i]!='\0'){
        cnt++;
        i++;
     }
     printf("%d",cnt);
}