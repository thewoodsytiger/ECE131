/*
Write a program to find the next largest
even multiple for the following values of i and j:
i: 365, 12,258, 996
j: 7, 23, 4
*/

#include <stdio.h>
int main()
{
  int i1=996;
  int i2=365;
  int i3=12258;
  int j1=4;
  int j2=7;
  int j3=23;

  int Next_multiple=i1+j1-i1%j1;

  printf ("The next largest even multiple of j=4 and i=996 is: %d\n", Next_multiple);

  Next_multiple=i2+j2-i2%j2;

  printf ("The next largest even multiple of j=7 and i=365 is: %d\n", Next_multiple);

  Next_multiple=i3+j3-i3%j3;

  printf ("The next largest even multiple of j=23 and i=12,258 is: %d\n", Next_multiple);

  return 0;
}
