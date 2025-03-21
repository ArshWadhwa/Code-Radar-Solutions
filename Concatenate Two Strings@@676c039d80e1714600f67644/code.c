#include <stdio.h>
#include <ctype.h> 


int main(){
    char c1[1000];
    char c2[1000];
    fgets(c1,sizeof(c1),stdin);
    fgets(c2,sizeof(c2),stdin);
    printf("%s%s",c1,c2);
    

     return 0;
}