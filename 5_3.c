#include <stdio.h>
int main(){
  int x, y;
  printf("Please type your first integer:\n ");
  scanf("%d", &x);
  printf("Please type your second integer:\n ");
  scanf("%d", &y);
  while(y==0){
    printf("You cannot divide by zero! Select another denominator.\n");
    printf("Please type your second integer:\n ");
    scanf("%d", &y);
  }
  if(y != 0){
    float quotient= (float) x/y;
    printf("The quotient of your two integers is: %.3f\n", quotient);
  }
  return 0;
}
