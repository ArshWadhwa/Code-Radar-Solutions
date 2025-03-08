void fibonacciSeries(int n){
    int a=0,b=1,nt;
    for(int i=0;i<=n;i++){
        nt=a+b;
        b=nt;
        a=b;
    }


}