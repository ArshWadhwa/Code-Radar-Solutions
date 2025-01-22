#include <stdio.h>


int main() {
  int a;
  int b;
  int c;
  scanf("%d %d %d",&a,&b,&c);
  if(a==b && b==c ){
    printf("Equilateral");
  }else if(a==b || c==a || c==a  ){
    printf("Isoscles");
  }else{
    printf("Scalene");
  }
}