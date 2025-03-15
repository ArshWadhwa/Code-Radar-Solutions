#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    i=0;
    j=k;
    while(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }
    i=k+1;
    j=n-1;
     while(i<j){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
        i++;
        j--;
    }

    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}