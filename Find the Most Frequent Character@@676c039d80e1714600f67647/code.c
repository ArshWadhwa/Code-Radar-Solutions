#include <stdio.h>
#include <ctype.h> 


int main(){
    char c1[1000];

    fgets(c1,sizeof(c1),stdin);

    int mxfreq=0;
    char mxChar=c1[0];
    int cnt=0;

for(int i=0;c1[i]!='\0';i++){
    for(int j=i+1;c1[j]!='\0';j++){
        if(c1[i]==c1[j]){
            cnt++;
           
            if(cnt>mxfreq && c1[i]<mxChar){
                mxfreq=cnt;
                mxChar=c1[i];
            }else{
                mxChar=c1[0];
                break
            }

        }
    }
}
     
printf("%c",mxChar);

     return 0;
}