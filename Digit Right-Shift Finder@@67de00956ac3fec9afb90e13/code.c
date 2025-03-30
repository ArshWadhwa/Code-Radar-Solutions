int digitRightShift(int N) {
    if (N < 10) return N; 

    int lastDigit = N % 10;  
    int remainingNum = N / 10; 

    int numDigits = 0
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    int mul=1;
    for(int i=0;i<numDigits;i++){
        mul*=10;
    }

    int res = lastDigit*mul +remainingNum;
    return res;
}