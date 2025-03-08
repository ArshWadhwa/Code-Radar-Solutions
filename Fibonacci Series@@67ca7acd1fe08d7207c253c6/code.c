int fibonacciSeries(int n){
    if(n==0 || n==1){
        return 0;
    }
    if(n>2){
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }

}