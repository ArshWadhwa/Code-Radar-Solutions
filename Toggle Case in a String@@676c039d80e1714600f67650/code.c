#include<stdio.h>
#include<ctype.h>

int main(){
    char c[1000];
    fgets(c,sizeof(c),stdin);

    for(int i=0;i!='\0';i++){
        if(islower(c[i])){
            c[i]=toupper(c[i]);
            
        }
        printf("%s",c);

    }
}