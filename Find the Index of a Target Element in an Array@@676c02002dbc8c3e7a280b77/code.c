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
 int fnd;
    scanf("%d",&t);
    for(int i=0;i<n;i++){
        if(arr[i]==t){
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