#include <stdio.h>

int main(){
    char c[1000];
    scanf("%s",&c);

    int n = strlen(c);

    for(int i=n;i>0;i--){
        printf("%s",i);

    }
}