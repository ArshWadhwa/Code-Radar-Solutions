#include<stdio.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int t=1;
   while(i!='\0'){
    if(c[i]!=0 || c[i]!=1){
            t=0;
            break;
        }
        i++;

   }
        


    

    if(t)
    printf("Yes");

    else
    printf("No");

    
}