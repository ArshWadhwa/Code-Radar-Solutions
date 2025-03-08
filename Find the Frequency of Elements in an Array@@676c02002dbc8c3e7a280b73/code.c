#include <stdio.h>


int main() {


    int s;
    scanf("%d",&s);
   
    int arr[s];


    int v[s];
    for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<s;i++){
    if(v[i]==1){
        continue;
    }
   }
   int cnt=1;
   for(int i=0;i<s;i++){
    for(int j=i+1;j<s;j++){
if(arr[i]==arr[j]){
        v[j]=1;
        cnt++;

    }
    }
    
   }
   printf("%d %d\n", arr[i], cnt);
   

}