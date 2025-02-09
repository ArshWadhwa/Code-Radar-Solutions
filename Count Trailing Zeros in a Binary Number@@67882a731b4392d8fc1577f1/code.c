#include <stdio.h>



int main() {
   int n;
   scanf("%d",&n);
   char res[1000];
   int cnt=0;
   while(n!=1){
    if(n%2==0){
    res+='1';
    }
    res+='0'
    cnt+=1;

    n=n/2;
   }
   printf("%d",cnt);
}