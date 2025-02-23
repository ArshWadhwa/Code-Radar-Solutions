#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    int pk=0;

    int max=arr[0];


    for(int i=1;i<a;i++){
        if(arr[i]>max){
        max=arr[i];
        
    }
    for(int i=max;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
            pk=1;
            break;
        
        }
    }

    }
    if(pk==1){
         printf("%d",max);
    }else{
        printf("-1");
    }
    
  
   
    return 0;

}