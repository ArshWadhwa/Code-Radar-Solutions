#include<stdio.h>
#include<stdln.h>
int main(){
    char c[10000];
    fgets(c,sizeOf(c),stdin);
    int i=0;
    int j=strlen(c)-1

    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;

    }
       printf("%s",c);

    // for(int i=0;i!='\0';i++){
     
    // }



}