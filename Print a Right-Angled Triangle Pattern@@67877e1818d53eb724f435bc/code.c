#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<i;j++){
            printf("* ");
        }
        printf("");
    }

}