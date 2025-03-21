#include <stdio.h>

int main() {
    char str[101]; 
    char c1, c2;

    scanf("%100s", str); 
    
    scanf(" %c", &c1); 
    

    scanf(" %c", &c2); 


    for(int i=0;i!='\0';i++){
        if(str[i]==c1 )
        c1=c2;
    }

    for(int i=0;i!='\0';i++){
        printf("%s",str);
    }
    return 0;
}

