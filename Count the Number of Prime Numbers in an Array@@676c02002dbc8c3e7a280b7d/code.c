#include<stdio.h>


int checkPrime(int arr[],n)
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }   
    int cnt=0;
    for(int i=0;i<n;i++){
        if(checkPrime(arr[i])){
            cnt++;
        }
    }
        printf("%d", cnt); 
    return 0;
    
}

int checkPrime(int num){
    
   if(num<2){
    return 0
   }
   for(int i=2;i*i<num;i++){
    if(num%i==0){
        return 0;
    }

   }
       return 1;
  

}