#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num=(i%2==0) ? 0 : 1;
        for(int j=0;j<n;j++){
            printf("%d",num);
            num=num-1;
        }
printf("\n");
    }
}