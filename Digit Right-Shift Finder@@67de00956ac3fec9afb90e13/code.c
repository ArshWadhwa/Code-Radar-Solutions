int digitRightShift(int N){

      if(N<10){
        return N;
    }

    if(N<100){
        int rev=0;
            while(N!=0){
                int rem=N%10;
                int rev=rev*10+N/10;
                
            }
            return rev;
        }
    int rev=0;
  
    if(N>100){
        int rem=N%10;
        int rev=rem*100+N;
        return rev;
    }

}