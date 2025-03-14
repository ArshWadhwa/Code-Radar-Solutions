// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);

//     }
//     int t;
//     scanf("%d",&t);
//     int fnd=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
            
//             if(arr[i]+arr[j]==t){
//             printf("%d %d\n",arr[i],arr[j]);
//             fnd=1;  
//             } 
        
//         }
       
//     }
//     return 0;
// }



#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements in the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read the array elements
    }
    int t;
    scanf("%d", &t);  // Read the target sum

    int found = 0;  // Flag to check if any pair is found

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == t) {
                printf("%d %d\n", arr[i], arr[j]);  // Print the pair
                found = 1;  // Set the flag to indicate a pair is found
            }
        }
    }

   

    return 0;
}