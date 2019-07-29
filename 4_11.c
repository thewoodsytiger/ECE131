/*
Write a program that calculates the sum of the digits of an integer.
For example, the sum of the digits of the number 2155 is 2 + 1 + 5 + 5 or 13.
The program should accept any arbitrary integer typed in by the user.
*/

#include<stdio.h>
int main(){
  int i, n, sum = 0;
  int rem;
  printf("Please enter your integer.\n");
  scanf("%d", &n);
  i=n;
  while (i!=0){
    rem=i%10;
    sum += rem;
    i=i/10;
  }
  printf("The value of the sum of the digits of %d is: %d\n", n, sum);
return 0;
}
