#include <stdio.h>
#include <limits.h>


int main() {
    int n;
  
    scanf("%d",&n);


    int arr[n];
    for( int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  
    int i=0;
    int j=n-1;
    bool palin=false;
    
    while(i<j){
        if(arr[i]==arr[j]){
            i++;
            j--;
            palin=true;
        }
        else{
            palin=false;
        }
    }
    if(palin==true){
        printf("YES");
    }else{
        printf("NO");
    }
}