int findOccurrence(int arr[],int n,int target,char mode){
    int res=-1;
    if(mode=='F'){
        res=arr[0];
    }else if(mode=='L'){
        res=arr[n-1];
    }
    return res;
}