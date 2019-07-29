#include <stdio.h>
int main(void){
  printf("Assignment 4.4 with while loops\n");
  int c=1;
  int f = 1;
  int n=10;
  printf(" Initial Value          Factorial\n");
  printf("---------------    ------------------\n");
    while(c<=n){
      f=f*c;
      c++;
      printf("      %d               %d\n", c, f);
    }
  }
