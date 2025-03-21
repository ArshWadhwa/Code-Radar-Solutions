#include <stdio.h>
#include <ctype.h> 


int main(){
    char c1[1000];

    fgets(c1,sizeof(c1),stdin);

    int mxfreq=0;
    char mxChar;
    int cnt=0;

for(int i=0;c1[i]!='\0';i++){
    for(int j=i+1;c1[j]!='\0';j++){
        if(c1[i]==c2[j]){
            cnt++;
           
            if(cnt>mxfreq){
                mxfreq=cnt;
                mxChar=c1[i];
            }

        }
    }
}
     
printf("%c",mxChar);

     return 0;
}