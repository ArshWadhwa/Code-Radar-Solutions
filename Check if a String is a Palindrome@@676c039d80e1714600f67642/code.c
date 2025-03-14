#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(){
    char c[1000];
    scanf("%s",&c);
    
    int cnt=0;
     for (int i = 0; c[i] != '\0'; i++) {
        c[i] = tolower(c[i]);  
    }
    int i=0;
    int j=strlen(c)-1;

    while(i<=j){
        if(c[i]!=c[j]){
            printf("No");
            return 0;
        }
        i++;
        j--;
     
    }
       printf("Yes");
}