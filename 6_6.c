#include<stdio.h>

int main(){
  int a, b, c, i;
  a=0;
  printf("The first number in the Fibonacci sequence is: %d\n", a);
  b=1;
  printf("The second number in the Fibonacci sequence is: %d\n", b);
  printf("The remainding Fibonacci numbers are:\n");
  for(i=2;i<15;i++){
    c=a+b;
    printf("%d\n", c);
    a=b;
    b=c;
  }

return 0;

}
