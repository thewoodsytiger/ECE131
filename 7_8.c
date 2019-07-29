#include<stdio.h>

// Function to calculate the absolute value of a number

float  absoluteValue (float x)
{
     if ( x < 0 )
         x = -x;
     return (x);
}

// Function to compute the square root of a number

float  squareRoot (float x)
{
     float guess   = 1.0;
     float epsilon = 0.000001;
     while  ( absoluteValue ((guess*guess/x)-1) >= epsilon)
         guess = ( x / guess + guess ) / 2.0;
     return guess;
}

int main (void)
{
  float  squareRoot (float x);
  float a, b, c, d;
  float rt1, rt2;

  //gather a b and c values

  printf("Please enter the a, b, and c values for some quadratic function\n");
  printf("f(x) = ax^2 + bx + c\n");

  printf("a=\n");
  scanf("%f", &a);

  printf("b=\n");
  scanf("%f", &b);

  printf("c=\n");
  scanf("%f", &c);

  d = (b*b)-(4*a*c);

  if (d<0){
    printf("Roots of f(x) are imaginary\n");
    return 1;
  }

  rt1 = ((-b + squareRoot(d)) / (2 * a));
  rt2 = ((-b - squareRoot(d)) / (2 * a));
  printf("The roots of f(x) are: %f, and %f.\n", rt1, rt2);
  return 0;
}

