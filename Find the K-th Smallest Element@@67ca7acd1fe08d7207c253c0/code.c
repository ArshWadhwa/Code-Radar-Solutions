
void bubbleSort(int arr[], int n);
int kthSmallestElement(int arr[], int n,int k){

    if(k>n){
        return 0;
    }
    else{
        for(int i=0;i<n;i++){
            int sm=arr[k-1];;
            return sm;
        }
    }
}
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}