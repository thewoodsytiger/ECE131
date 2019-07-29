#include <stdio.h>
int main(void){
  int n, nSquared;
  printf(" n    n squared\n");
  printf("---  -----------\n");
  nSquared = 0;
  for (n = 1; n<=10; ++n){
    nSquared = (n*n);
    printf(" %i        %i\n", n, nSquared);
  }
  return 0;
}
