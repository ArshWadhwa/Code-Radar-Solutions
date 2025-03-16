int searchInRotatedArray(int arr[],int n,int target){
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }else {
            return res;
        }
    }

}