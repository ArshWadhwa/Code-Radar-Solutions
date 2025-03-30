int fact(int n){
    if(n==0){
        return 1;
    }

    for(int i=1;i<=n;i++){
        return n*fact(n-1);
    }

}
int factorialRange(int start , int end){
    if(start>end || start <0 || end<0){
        printf("Invalid range");
        
    }
    for(int i=start;i<=end;i++){
        printf("%d\n",fact(i));
    }
}