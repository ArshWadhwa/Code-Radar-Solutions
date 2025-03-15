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
        for(int j=i+1;j<n;j++){
            
            if(arr[i]+arr[j]==t){
            printf("%d %d\n",arr[i],arr[j]);
            if(arr[j]==arr[j+1]){
                //printf("%d %d\n",arr[i],arr[j]);
                fnd=1;
            }
              
            } 
        
        }
       
    }
    return 0;
}



