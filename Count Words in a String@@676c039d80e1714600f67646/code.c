#include<stdio.h>
int main(){
    char c[10000];
    fgets(c, sizeof(c), stdin);
    int cnt=0;
    int i=0;
    while(c[i]!='\0'){
       
        if(c[i]==' ' && i!=' '){
            cnt++;
        }

        
    i++;
    }
    cnt++;
    printf("%d",cnt);
}