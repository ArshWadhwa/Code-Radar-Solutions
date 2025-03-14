#include<stdio.h>

int maxFreq(int n,int arr[]){
    int mxFreq=0, res=arr[0];
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            cnt++;
        }
    }
    cnt> res || cnt==res && arr[i]<res ? mxFreq=cnt : res=arr[i];
    printf("%d",res);

}