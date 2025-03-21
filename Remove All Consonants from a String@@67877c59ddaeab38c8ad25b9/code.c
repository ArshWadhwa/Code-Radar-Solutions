#include<stdio.h>
#include <ctype.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int i=0;

  for(int i=0;c[i]!='\0';i++){
    char ch = tolower(c[i]);

   if(ch =='a' || ch =='e' || ch =='i' || ch =='i' || ch =='o' || ch =='u' ){
        printf("%c",c[i]);
   }
 else if (isdigit(ch)) {
            printf("%c", c[i]);
        } 
        
   }
   else if (ch == ' ') {
            printf(" ");
        }
   }
  return 0;
}