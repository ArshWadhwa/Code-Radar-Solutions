#include <stdio.h>


int main() {
 int a;
 int b;
 scanf("%d %d",&a,&b);
 if(a==b){
    printf("No Profit No Loss");
 }else{
 a<b ? printf("Profit") : printf("Loss");
 }

}