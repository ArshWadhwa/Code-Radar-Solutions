#include<stdio.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int t=1;
    int i=0;
   while(c[i]!='\0'){
    if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='i' || c[i]=='o' || c[i]=='u' ){
        printf("%c",c[i]);
    }else{
        continue;
    }
    i++;

   }
        
    

    
}