#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double a, b;
   
      printf("Enter first number: ");
      scanf("%lf", &a);
   
      printf("Enter second number: ");
      scanf("%lf", &b);
   
      printf("Sum: %lf\n", a + b);
      printf("Difference: %lf\n", a - b);
      printf("Product: %lf\n", a * b);
      printf("Quotient: %lf\n", a / b);
   
    return 0;
}