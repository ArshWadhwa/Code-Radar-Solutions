int fibo(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n>2){
        return fibo(n-1)+fibo(n-2);
    }

}