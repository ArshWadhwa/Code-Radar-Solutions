#include <stdio.h>
#include <string.h>  

int main() {
    char c[10000];
    fgets(c, sizeof(c), stdin);
    
    int cnt = 0;
    int i = 0;
    int k = strlen(c);

    if (k == 0) {
        printf("0");
        return 0; 
    }

    while (c[i] != '\0') {
        if (c[i] == ' ' && c[i - 1] != ' ' && i != 0) { 
            cnt++;
        }
        i++;
    }

    cnt++; 
    printf("%d", cnt);
    
    return 0;
}