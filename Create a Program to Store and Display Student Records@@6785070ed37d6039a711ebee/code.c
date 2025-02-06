#include <stdio.h>



int main() {
   int ent;
   int rn,rn2;
   char name[1000],name2;
   float m,m2;
   scanf("%d\n%d %s\n%f\n%d %s\n%f",&ent,&rn,&name,&m,&rn2,&name2,&m2);

   printf("Roll number: %d, Name: %s, Marks: %.2f",&rn,&name,&m);
   printf("Roll number: %d, Name: %s, Marks: %.2f",&rn2,&name2,&m2);

}