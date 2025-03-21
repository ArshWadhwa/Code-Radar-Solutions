// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; 
    char str2[1000];
    int an =1;
    int cnt=0;
    
    for(int i=0;str[i]!='\0';i++){
         for(int j=0;str[i]!='\0';j++){
            if(str[i]==str[j]){
                cnt++;
                break;
            }   
        
    }
    }
    if(cnt == strlen(str)){
        printf("Yes");
    }else{
        printf("No");
    }

   
}

