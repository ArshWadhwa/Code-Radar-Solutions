#include <stdio.h>
int n;
scanf("%d",&n);


int main() {
    for(int i=0;i<=n;i++){
        char c='A';
        for(int j=0;j<=i;j++){
        printf("%c",c);
        c++;
        
    }
    printf("\n");
}
}