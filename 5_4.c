#include<stdio.h>
int main(){
  int acum, num;
  char o;
  int i=0;

//TRY TO MAKE A NESTED SWITCH?

  printf("Being Calculations\n");
  printf("You may enter the following values in the format: (number operator).\n");
  printf("The operators are NOT case sensative.\n");
  printf("# S = Set Accumulator\n");
  printf("# + = Add number to Accumulator\n");
  printf("# - = Subtract number from Accumulator\n");
  printf("# * = Multiply number to Accumulator\n");
  printf("# / = Divide Accumulator by number\n");
  printf("# E = Exit Calculations\n");

while (i==0){
  scanf("%d %c", &num, &o);
  if(o=='s'){
    o='S';
  }if(o=='e'){
    o='E';
  }
  switch (o) {
    case 'S':
      acum=num;
      printf("The new value of the Accumulator is: %f\n", (float) acum);
      break;

    case '+':
      acum=acum+num;
      printf("The new value of the Accumulator is: %f\n", (float) acum);
      break;

    case '-':
      acum=acum-num;
      printf("The new value of the Accumulator is: %f\n", (float) acum);
      break;

    case '*':
      acum=acum*num;
      printf("The new value of the Accumulator is: %f\n", (float) acum);
      break;

    case '/':
      if (num!=0){
        acum=acum / num;
        printf("The new value of the Accumulator is: %f\n", (float) acum);
        break;
      } else {
        printf("You cannot divide by zero! Enter another value.\n");
        break;
    }
    case 'E':
    printf("The final value of the Accumulator is %f\n", (float) acum);
    printf("Goodbye!\n");
    i=1;
    break;

    default:
      printf("I don't know this operator... try another one\n");
      break;
    }
}
  return 0;
}
