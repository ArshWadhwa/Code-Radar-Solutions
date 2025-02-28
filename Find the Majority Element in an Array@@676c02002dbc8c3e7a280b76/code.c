#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      
    bubbSort(arr,n);

    int cnt=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cnt+=1;
        }else {
            if(cnt > mxCnt) {
                mxCnt = cnt;
            }
        }
    }
    if(mxCnt>n/2){
        printf("%d",arr[i]);

    }else{
        printf("-1");
    }


}

void bubbSort(){
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i+1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

}