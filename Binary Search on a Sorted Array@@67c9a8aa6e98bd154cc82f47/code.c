int binarySearch(int arr[],n,target){
    int i=0;
    int j=n-1;
    
    while(i<=j){
        int mid=i+(j-i)/2;
        if(arr[mid]>target){
            j=mid-1;

        }else if(arr[mid]<taget){
            i=mid+1;
        }else{
            arr[mid]=target;
        }
    }
    return mid;
}