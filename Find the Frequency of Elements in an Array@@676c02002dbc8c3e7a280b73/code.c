#include <stdio.h>


int main() {


    int s;
    scanf("%d",&s);
   
    int arr[s];

    int cnt=0;


    for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
   }
   for (int i=0;i<s;i++){
    for(int j=i;j<s;j++){
        if(arr[i]==arr[j]){
            cnt++;
              printf("%d %d",arr[i],cnt);
        }
        printf("\n")
    }
  
   }
   

}