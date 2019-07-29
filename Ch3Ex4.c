#include <stdio.h>
int main()
{
  float far=27.0;
  float cel=0.0;
  cel=(far-32)/1.8;
  printf("27 degrees Fahrenheit in Celcius is: %f\n", cel);
  // %f is used here as the declared type is a float, and must use %f, %e, %g, or %a
  return 0;
}
