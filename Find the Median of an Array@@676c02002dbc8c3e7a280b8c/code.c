#include <stdio.h>
#include <limits.h>

int main() {
    int a;
    scanf("%d",&a);

    int arr[a];

    for(int i =0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=sizeOf(a)/arr[0];
    for(int i=0;i<a;i++){
       if(cnt%2!=0){
        int md=arr[i]/2
        printf("%d",md);
    }else{
        int md2=(arr[i]+arr[i+1])/2;
        printf("%d",md2);
    }
    }
    
    

}