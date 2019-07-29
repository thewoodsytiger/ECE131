/*
Write a program to generate
and print a table of the first 10 factorials.
*/

#include <stdio.h>
int main(void){
  int c, f = 1;
  int n=10;
  printf(" Initial Value          Factorial\n");
  printf("---------------    ------------------\n");
    for(c=1;c<=n;c++){
      f=f*c;
      printf("      %d               %d\n", c, f);
    }
  return 0;
}

