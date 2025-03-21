#include<stdio.h>
#include<string.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int i=0;
    int j=strlen(c)-1;

    while(i<j){
        char temp=c[i];
        c[i]=c[j];
        c[j]=temp;
        i++;
        j--;

    }
       printf("%s",c);

    // for(int i=0;i!='\0';i++){
     
    // }



}