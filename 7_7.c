#include<stdio.h>

long int x_to_the_n(int x, int n)
{
  int x_sq = 1;
 for (int i=1;i<=n;i++)
    x_sq = x_sq * x;
  return (long) x_sq;
}
int main (void){
  printf("7 to the power of 2 is: %ld\n", x_to_the_n(7, 2));
  printf("4 to the power of 3 is: %ld\n", x_to_the_n(4, 3));
  printf("12 to the power of 4 is: %ld\n", x_to_the_n(12, 4));

  return 0;
}

