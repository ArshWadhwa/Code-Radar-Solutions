#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",c);
            c++;
        }
    }
}