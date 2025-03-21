#include <stdio.h>
#include <ctype.h> 


int main(){
    char c[1000];
    fgets(c,sizeof(c),stdin);
    
   
    
    int cnt=0;
     for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] == '\n') break;
         c[i] = tolower(c[i]);  
         cnt++;
  
    }

    
     printf("%d",cnt);
     return 0;
}