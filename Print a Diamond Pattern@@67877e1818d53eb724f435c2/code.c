
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Top single star
    printf("*\n");

    // Middle stars: '***' printed (2n - 2) times
    for (int i = 0; i < 2 * n - 2; i++) {
        printf("***\n");
    }

    // Bottom single star (only if n > 1)
    if (n > 1) {
        printf("*\n");
    }

    return 0;
}



// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             printf(" ");
//         }
//         for(int k=0;k<2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=0;i--){
//         for(int j=0;j<n-i;j++){
//             printf(" ");
//         }
//         for(int k=0;k<2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }