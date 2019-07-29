/*
Have the program generate every fifth
triangular number between 5 and 50
(that is, 5, 10, 15, ..., 50).
*/

#include <stdio.h>
int main(void){
  printf(" Initial Value      Triangular Number\n");
  printf("---------------    -------------------\n");
  int n, triangularNumber;
  for (n=0;n<=50;n=n+5){
    triangularNumber = (n*(n+1))/2;
    printf("      %i                    %i\n", n, triangularNumber);
  }
  return 0;
}
