int findOccurrence(int arr[],int n,int target,char mode){
    int res=-1;
    for(int i=0;i<n;i++){

    if(mode=='F' && target==arr[i]){
        res=i;
        return i;
    }else if(mode=='L' && target==arr[i]){
        res=i;
        
    }
}   
   return res;
}