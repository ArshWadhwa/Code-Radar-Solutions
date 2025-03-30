int incrementToPrimeDigits(int N){
   int temp=N;
   int cnt=0;
    while(temp!=0){
        temp/=10;
        cnt++;
        
    }
    int arr[cnt];
    int l=cnt-1;
     
     while(N>0){
        arr[l]=N%10;
        N/=10;
        l--;
     }
     for(int i=0;i<cnt;i++){
        printf("%d",arr[i]);
     }
}