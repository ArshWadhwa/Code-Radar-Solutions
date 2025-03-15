#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int l=INT_MIN;
    int sl=INT_MIN;


    for(int i=0;i<n;i++){
        if(abs(arr[i])>l){
            sl=l;
            l=abs(arr[i]);
        }else if(abs(arr[i])>sl && abs(arr[i])<l){
            sl=abs(arr[i]);
        }
    }
  printf("%d",sl*l);
}