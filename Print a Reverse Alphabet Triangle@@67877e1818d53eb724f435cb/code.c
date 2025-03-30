#include <stdio.h>


int main() {
    int n;
    scanf("%d",&n);
   for( int i=0;<n;i++){
    for( int j=0;j<i;j++){
        printf("%c ",65+j);
    }
    printf("\n");
}
}