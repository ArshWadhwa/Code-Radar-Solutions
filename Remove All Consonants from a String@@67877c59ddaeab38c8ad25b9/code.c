#include<stdio.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int i=0;
  for(int i=0;c[i]!='\0';i++){

   if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='i' || c[i]=='o' || c[i]=='u' ){
        printf("%c",c[i]);
       
            
        
   }else{
    printf(" ");
    continue;
   }
  }
 
        
    

    
}