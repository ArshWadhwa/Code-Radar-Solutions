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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d %d\n",arr[i],arr[j]);
                break;
            }
            if(arr[i]+arr[j]==t){
            printf("%d %d\n",arr[i],arr[j]);
            }
          
        
        }
       
    }
    
    


}