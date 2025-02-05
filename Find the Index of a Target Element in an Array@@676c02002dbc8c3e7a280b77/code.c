#include <stdio.h>
#include<limits.h>

int main() {
 int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
       scanf("%d ",&arr[i]);
    }
    int t;
   
    scanf("%d",&t);
     int fnd=0;
    for(int i=0;i<n;i++){
        if(arr[i]==t){
            printf("%d",i);
            fnd=1;
            break;
    }

if(fnd==1){
    printf("%d",i);
}else{
    printf("-1");
}
}

}