void fibonacciSeries(int n){
    int a=0,b=1,nt;
    for(int i=0;i<n;i++){
        printf("%d ",a)
        nt=a+b;
        a=b;
        b=nt;
    }

}

// int main() {
//     int n;


//     scanf("%d", &n);


//     if (n <= 0) {
//         printf("Invalid input\n");
//         return 0;
//     }

   
//     fibonacciSeries(n);

//     return 0;
// }