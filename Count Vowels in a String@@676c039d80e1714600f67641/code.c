#include<stdio.h>

int main(){
    char c[1000];
    scanf("%s",&c);
    int cnt=0;
    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i' ||c[i]=='o'||c[i]=='u'){
            cnt++;
        }
    }
    printf("%d",cnt);
}