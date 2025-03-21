#include<stdio.h>
#include <ctype.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int i=0;
  for(int i=0;c[i]!='\0';i++){
    char ch =tolower(c[i]);

   if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ){
        printf("%c",ch[i]);
       
 else if (isdigit(ch[i])) {
            printf("%c", ch[i]);
        } 
        
   }else if (ch[i] == ' ') {
            printf(" ");
        }
   
    
    continue;
   }
  }
 
        
    

    
}