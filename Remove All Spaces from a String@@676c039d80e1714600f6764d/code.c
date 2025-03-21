#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main(){
    char c[1000];
    fgets(c,sizeof(c),stdin);
    

    for(int i=0;c[i]!=0;i++){
        if(c[i]==' '){
            continue;
        }
        
    }
    printf("%s",c);
}