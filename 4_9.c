
#include <stdio.h>
int main(void){
  printf("Assignment 4.2 with while loops\n");
  int n, nSquared;
  printf(" n    n squared\n");
  printf("---  -----------\n");
  nSquared = 0;
  while (n<=10){
    nSquared = (n*n);
    n++;
    printf(" %d        %d\n", n, nSquared);
  }

//4.3
  printf("Assignment 4.3 with while loops\n");
  printf(" Initial Value      Triangular Number\n");
  printf("---------------    -------------------\n");
  n=0;
  int triangularNumber;
  while (n<=50){
    triangularNumber = (n*(n+1))/2;
    n=n+5;
    printf("      %d                    %d\n", n, triangularNumber);
  }

//4.4
  printf("Assignment 4.4 with while loops\n");
  int c, f = 1;
  n=10;
  printf(" Initial Value          Factorial\n");
  printf("---------------    ------------------\n");
    while(c<=n){
      f=f*c;
      c++;
      printf("      %d               %d\n", c, f);
    }
}
