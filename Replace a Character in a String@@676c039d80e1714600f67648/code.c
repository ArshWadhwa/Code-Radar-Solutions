#include <stdio.h>

int main() {
    char str[1000]; 
    char c1, c2;

    scanf("%s",str); 
    
    scanf("%c",&c1); 
    

    scanf("%c",&c2); 


    for(int i=0;i!='\0';i++){
        if(str[i]==c1 ){
                c1=c2;
        }
       
    }

    for(int i=0;i!='\0';i++){
        printf("%s",str);
    }
    return 0;
}

