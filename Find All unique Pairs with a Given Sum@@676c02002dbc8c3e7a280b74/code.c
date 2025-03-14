#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int t;
    scanf("%d",&t);
    int fnd=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==t);
            fnd=1;
            printf("%d %d\n",arr[j],arr[i]);
            break;
        }
    }
    
    


}