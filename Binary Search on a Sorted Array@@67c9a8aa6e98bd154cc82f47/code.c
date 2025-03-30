int binarySearch(int arr[],int n,int target){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(target==arr[mid]){
            return mid;
        }
        else if(target>arr[mid]){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    return -1;
    }
   
}