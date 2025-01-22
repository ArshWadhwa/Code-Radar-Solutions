#include <stdio.h>


int main() {
  int a;
  int b;
  int c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b && b==c && a==c){
    printf("Equilateral");
  }else if(a==b &&b!=c && c==a ){
    printf("Isoscles");
  }else{
    printf("Scalene");
  }
}