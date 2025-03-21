// Your code here...
#include <stdio.h>
#include <ctype.h> 


int main(){
    char c[1000];
    fgets(c,sizeof(c),stdin);
    char k;
    scanf("%c",k);
   
    
    int cnt=0;
     for (int i = 0; c[i] != '\0'; i++) {
        if(c[i]==k){
            cnt++;
            
        }
  
    }

    
     printf("%d",cnt);
     return 0;
}