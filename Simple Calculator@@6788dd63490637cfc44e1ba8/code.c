#include <stdio.h>

int main() {
  int a;
  int b;
  char o;
  scanf("%d %d %c", &a, &b, &o);
  
  if (o == '+') {
    printf("%d", a + b);
  } else if (o == '-') {
    printf("%d", a - b);
  } else if (o == '/') {
    if (b != 0) {
      printf("%f", a / b);
    } else {
      printf("Error");
    }
  } else if (o == '*') {
    printf("%d", a * b);
  } else {
    printf("Invalid Operator");
  }

  return 0;
}
