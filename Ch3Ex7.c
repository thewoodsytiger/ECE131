/*
Write a program that evaluates the following expression and
displays the results (remember to use exponential format to display the result):
(3.31 x 10-8 x  2.01 x 10-7) / (7.16 x 10-6 + 2.01 x 10-8)
*/

#include <stdio.h>
int main()
{
  float num=((3.31e-8)*(2.01e-7));
  float dem=((7.16e-6)+(2.01e-8));
  float result=num/dem;
  printf("The result of the expression in Ch. 3 Ex. 7 is: %e\n", result);
  return 0;
}
