#include <stdio.h>
#include <ctype.h> 
#include <string.h> 


int main(){
    char c1[1000];

    fgets(c1,sizeof(c1),stdin);
    int l = strlen(c1);
    int mxfreq=0;
    char mxChar=c1[l-1];
    int cnt=0;

for(int i=0;c1[i]!='\0';i++){
    for(int j=i+1;c1[j]!='\0';j++){
        if(c1[i]==c1[j]){
            cnt++;
           
            if(cnt>mxfreq && c1[i]<mxChar){
                mxfreq=cnt;
                mxChar=c1[i];
            }
        printf("%c: %d\n",mxChar,cnt);
        }
    }
}
     


     return 0;
}