#include <stdio.h>



int main() {
    int a;
    int isSorted=1;
  scanf("&d",&a);
  printf("%d",a);

  int arr[a];
  for( int i=0;i<a;i++){
    scanf("%d",&arr[i]);
    printf("%d",i);
  }
  for(int i=0;i<a-1;i++){
    if(arr[i]>arr[i+1]){
        isSorted=0;
    }
    break;
    if(isSorted){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
return 0;
  }
}