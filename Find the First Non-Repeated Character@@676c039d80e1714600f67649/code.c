#include <stdio.h>
#include <ctype.h> 
#include <string.h> 


int main(){
    char c1[1000];

    fgets(c1,sizeof(c1),stdin);
    int l = strlen(c1);

    char mxChar=c1[0];

for(int i=0;c1[i]!='\0';i++){
    for(int j=i+1;c1[j]!='\0';j++){
        if(c1[i]!=c1[j]){
            mxChar=c1[i];
        }else{
            mxChar=c1[0];
            return;
        }
    }
}
     
printf("%c",mxChar);

     return 0;
}