bubbSort(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int l=1;
    bubbSort(arr,n);
    for(int i=0;i<n-1;i++){
        if(arr[i+1]-arr[i]==1){
            l++;
        }
    }
printf("%d",l);




void bubbSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i+1;j++){
            if(arr[i]>arr[j]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
    
}

