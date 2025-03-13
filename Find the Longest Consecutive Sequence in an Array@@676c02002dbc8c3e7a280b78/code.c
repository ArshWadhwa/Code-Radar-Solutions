void bubbSort(int arr[],int n);
int main(){
    int n;
    scanf("%d\n",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int l=1;
    int mxlen=1;
    bubbSort(arr,n);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            l++;
            if(l>mxlen){
                mxlen=l;
            }else if(arr[i+1]!=arr[i]){
                l=1;
            }
        }

    }
printf("%d",mxlen);



}
void bubbSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i+1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
    


