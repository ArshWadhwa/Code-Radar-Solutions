int isPrime(int a , int b){
    for(int i=a ;i<=b;i++){
        for(int i=a;i*i<a;i++){
            if(a%i==0){
                continue;
            }else{
                return i;
            }
        }
    }

}
int printPrimeInRange(int a, int b){
    for( int i=a;i<=b;i++){
        return isPrime(a,b);
    }
}