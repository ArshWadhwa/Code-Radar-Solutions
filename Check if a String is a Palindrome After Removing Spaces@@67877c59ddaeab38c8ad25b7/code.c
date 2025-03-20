#include <stdio.h>
#include <string.h>
#include <ctype.h> 
int main() {
    char c[10000];
    fgets(c, sizeof(c), stdin);

    int i = 0;
    int j = strlen(c) - 1;
    int p = 1;

    while (i < j) {
        if (c[i] == ' ') {  
            i++;
            continue; 
        }
        if (c[j] == ' ') {  
            j--;
            continue;  
        }
        if (tolower(c[i]) != tolower(c[j])) {  
            p = 0;
            break;
        }
        i++;
        j--;
    }

    if (p) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
