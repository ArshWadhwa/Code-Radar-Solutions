#include <stdio.h>
#include <ctype.h> 
#include <string.h>

int main() {
    char c[1000];
    fgets(c, sizeof(c), stdin);

    int j = 0;
    for (int i = 0; c[i] != '\0'; i++) {
        if (c[i] != ' ') {
            c[j] = c[i];
            j++;
        }
    }
    c[j] = '\0';

    printf("%s", c);
}