#include<stdio.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int t=1;
    for(int i=0;i!='\0';i++){
        if(c[i]!=0 || c[i]!=1){
            t=0;
            break;
        }


    }

        if(t)
    printf("Yes");

    else
    printf("No");

    
}