#include <stdio.h>

int prime(int x){
  int pr = 0;
  int i = 1;
  for(i=1;i<=x;i++){
    if(x%i==0){
      pr++;
    }
  } if (pr==2){
      i=1;
    } else {
      i=0;
    }
  return i;
}

int main (void){
  int prime(int x);
  int num;
  printf("Enter your number:\n");
  scanf("%d", &num);
  if (prime(num)==0){
  printf("%d is not a prime number.\n", num);
} else {
  printf("%d is prime.\n", num);
}
return 0;
}
