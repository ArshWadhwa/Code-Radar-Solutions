#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
            int cnt=0;
    for(int i=0;i<n;i++){
        int org=arr[i];

        int rev=0;
        while(arr[i]!=0){
            int rem =arr[i]%10;
            rev+=rev*10+rem;
            arr[i]/=10;

       }

        arr[i]=org;

         if(rev==arr[i]){
        cnt+=1;
  
    }
    }
        
        printf("%d",cnt);
   
}