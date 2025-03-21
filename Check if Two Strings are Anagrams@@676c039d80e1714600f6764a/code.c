// Your code here...
#include <stdio.h>

int main() {
    char str[1000]; 
    char str2[1000];
    int an =1;
    int cnt=0;
    
    for(int i=0;str[i]!='\0';i++){
         for(int j=0;str2[j]!='\0';j++){
            if(str[i]==str[j]){
                cnt++;
                break;
            }   
        
    }
    }
    if(an && cnt==1){
        printf("Yes");
    }else{
        printf("No");
    }

   
}

