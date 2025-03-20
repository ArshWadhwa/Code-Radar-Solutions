 #include <stdio.h>
#include <string.h>

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
        if (c[i] != c[j]) {  
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

    }
    if(c[j]==' '){
        j--;
    }
    if(c[i]!=c[j]){
        p=0;
        break;

    }
    
    i++;
    j--;

}
if(p){
    printf("Yes");
}
printf("No");