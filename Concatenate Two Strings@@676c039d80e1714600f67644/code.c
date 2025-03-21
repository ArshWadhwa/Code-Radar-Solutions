#include <stdio.h>
#include <ctype.h> 


int main(){
    char c1[1000];
    char c2[1000];
    fgets(c1,sizeof(c1),stdin);
    fgets(c2,sizeof(c2),stdin);
    
    for(int i=0;c1[i]!='\0';i++){
        if(c1[i]=='\n'){
            c1[i]='\0';

        }
    }
     for(int j=0;c2[j]!='\0';j++){
        if(c2[j]=='\n'){
            c2[j]='\0';
        }
    }
    printf("%s%s",c1,c2);

     return 0;
}