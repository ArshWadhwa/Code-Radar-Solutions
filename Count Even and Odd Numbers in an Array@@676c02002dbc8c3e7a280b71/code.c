#include <stdio.h>



int main() {
   int s;
   scanf("%d",&s);
   
   int arr[s];

int odd_c=0;
int eve_c=0;

   for(int i=0;i<s;i++){
    scanf("%d",&arr[i]);
   }

    for(int i=0;i<s;i++){
        arr[i]%2==0 ? odd_c+=1 : eve_c+=1
        
    }
    printf("%d %d",odd_c,eve_c);

}