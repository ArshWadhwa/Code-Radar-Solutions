#include<stdio.h>
int maxFreq(int n,int arr[]){
    int cnt;
    int mxFreq=0, res=arr[0];
    for(int i=0;i<n;i++){
         cnt=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cnt+=1;
            }else {
                cnt+=0;
            }
        }

        ((cnt> mxFreq) || (cnt==mxFreq && arr[i]<res)) ? (mxFreq=cnt,res=arr[i]): 0;
    }
    
    return res;

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("%d",maxFreq(n,arr));

    }