/*
Write a program to evaluate the polynomial shown here:
3x^3-5x^2+6 for x = 2.55
for this exercise I will use Horners Method of polynomial reduction
*/

#include <stdio.h>
int main()
{
  float x = 2.55;
  float result = (((3.00*x)-5.00)*x*x)+6;
  printf("The polynomial 3x^3-5x^2+6 at x = 2.55 has a result of: %f\n", result);
}
