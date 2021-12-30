#include<stdio.h>
int main() {
  double x,y,temp;
  printf("Enter first number: ");
  scanf("%lf", &x);
  printf("Enter second number: ");
  scanf("%lf", &y);
  temp = x;
  x = y;
  y = temp;
  printf("\nAfter swapping, first number = %.2lf\n",x);
  printf("After swapping, second number = %.2lf", y);
  return 0;
}