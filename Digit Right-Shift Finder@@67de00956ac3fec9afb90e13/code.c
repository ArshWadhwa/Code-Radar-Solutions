int digitRightShift(int N) {
    if (N < 10) return N; // Single-digit case

    int lastDigit = N % 10;  // Extract last digit
    int remainingNum = N / 10; // Remove last digit

    // Count the number of digits in remainingNum
    int numDigits = 0, temp = remainingNum;
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    int mul=1;
    for(int i=0;i<N;i++){
        mul*=10;
    }

    int res = lastDigit*mul +remainingNum;
    return res;
}