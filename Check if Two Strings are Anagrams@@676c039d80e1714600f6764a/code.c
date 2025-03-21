// Your code here...
#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; 
    char str2[1000];
    int an =1;
    int cnt=0;
    int l1=strlen(str);
    int l2=strlen(str2);

    
    for(int i=0;str[i]!='\0';i++){
         for(int j=0;str[i]!='\0';j++){
            if(str[i]==str[j] && l1==l2 ){
                cnt++;
                break;
            }   
        
    }
    }
    if(cnt==l1){
        printf("Yes");
    }else{
        printf("No");
    }

   
}

