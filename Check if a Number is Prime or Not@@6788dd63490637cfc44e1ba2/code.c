#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int isP=1;
    if(a<2){
        printf("Not Prime");

    }
    
    for( int i =0;i<a;i++){
        if(a%i==0){
            isP=0;
        }else{
            isP=1;
        }
     
    }
    if(isP==1){
        printf("Prime");

    }else{
        printf("Not Prime");
    }
}
