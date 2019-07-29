#include <stdio.h>
int main(void){
  printf("Assignment 4.3 with while loops\n");
  printf(" Initial Value      Triangular Number\n");
  printf("---------------    -------------------\n");
  int n=5;
  int triangularNumber;
  while (n<=50){
    triangularNumber = (n*(n+1))/2;
    n=n+5;
    printf("      %d                    %d\n", n, triangularNumber);
  }
}
