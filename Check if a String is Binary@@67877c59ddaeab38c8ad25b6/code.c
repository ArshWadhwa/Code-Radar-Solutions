#include<stdio.h>
int main(){
    char c[10000];
    fgets(c,sizeof(c),stdin);
    int t=1;
    int i=0;
   while(c[i]!='\0'){
    if(c[i]!=0 && c[i]!=1){
            t=0;
            break;

         

        }
        i++;

   }
        
    if(t==0){
    printf("No");
    }


    else{
printf("Yes");
    }
    

    
}