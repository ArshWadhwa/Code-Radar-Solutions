#include<stdio.h>
  bubbSort(arr,n);
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
      
    bubbSort(arr,n);
    int mxCnt=1;
    int cnt=1;
    int majElement=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            cnt+=1;
        }else {
            if(cnt > mxCnt) {
                mxCnt = cnt;
                majElement=arr[i];
            }else{
                cnt=1;
            }
        }
    }
     if (cnt > mxCnt) {
        mxCnt = cnt;
        majElement = arr[n - 1];
    }
     if (mxCnt > n / 2) {
        printf("%d", majElement);
    } else {
        printf("-1");
    }


}

void bubbSort(int arr[], int n){
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