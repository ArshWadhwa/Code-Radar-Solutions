#include <stdio.h>
#include <ctype.h> 


int main(){
    char c[1000];
    fgets(c,sizeof(c),stdin);
    
    int cnt=0;
     for (int i = 0; c[i] != '\0'; i++) {
        c[i] = tolower(c[i]);  
           if(c[0]=='\n'){
        printf("0");
        return 0;
    }
    }
    int i=0;
 
    
     while(c[i]!='\0' ){
        cnt++;
        i++;
   
        
     }
     printf("%d",cnt);
}