#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int mx=-1;
    for(int i=n-2;i>=0;i--){
        int temp=arr[i];
        arr[i]=mx;
        mx=fmax(mx,temp);

    }

    return arr;
}