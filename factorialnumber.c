#include<stdio.h>
int main() {
  int i, Digit, fact = 1;
  printf("Enter a number to calculate its factorial : ");
  scanf("%d", &Digit);
  for (i = 1; i <= Digit; i++)
    fact = fact * i;
    printf("Factorial of %d = %d\n", Digit, fact);
    return 0;
}