#include <stdio.h>
int main(void){
  printf("Assignment 4.2 with while loops\n");
  int n=0;
  int nSquared;
  printf(" n    n squared\n");
  printf("---  -----------\n");
  nSquared = 0;
  while (n<=10){
    nSquared = (n*n);
    n++;
    printf(" %d        %d\n", n, nSquared);
  
}}
