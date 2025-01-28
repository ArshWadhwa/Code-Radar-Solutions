#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }

    int max=arr[0];
    for(int i=1;i<a;i++){
        if(arr[i]>max){
        max=arr[i];
        break;
    }else{
        printf("-1");
    }

    }
    
  
    printf("%d",max);
    return 0;

}