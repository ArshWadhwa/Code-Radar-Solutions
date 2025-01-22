#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Check for validity of the triangle
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || b + c <= a || c + a <= b) {
        printf("Invalid Triangle");
    } else if (a == b && b == c) {
        printf("Equilateral");
    } else if (a == b || b == c || c == a) {
        printf("Isosceles");
    } else {
        printf("Scalene");
    }

    return 0;
}
