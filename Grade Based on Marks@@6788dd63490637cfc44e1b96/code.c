#include <stdio.h>

int main() {
 int g;
 scanf("%d",&g);
 if(g>=90){
    printf("A")

 }else if(g>=80 && g<90){
    printf("B")
 }else if(g>=70 && g<80){
    printf("C");
 }else if(g>=60 && g<70){
    printf("D");
 }else if(g<60){
    printf("F")
 }else{
    printf("invalid");
 }

}