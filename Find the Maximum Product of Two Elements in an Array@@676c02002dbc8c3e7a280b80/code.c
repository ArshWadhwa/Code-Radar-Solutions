#include <stdio.h>
#include <limits.h>
#include <stdlib>

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
        if(arr[i]>l){
            sl=l;
            l=abs(arr[i]);
        }else if(arr[i]>sl && arr[i]<l){
            sl=abs(arr[i]);
        }
    }
  printf("%d",sl*l);
}