#include <stdio.h>
#include <string.h>  

int main() {
    char c[10000];
    fgets(c, sizeof(c), stdin);
    
    int i=0;
    while(c[i]!='\0'){
        if(c[i]==c[i+1]){
            i++;
        }
      
    }
      printf("%s",c);
    
    return 0;
}