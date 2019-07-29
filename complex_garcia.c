#include "garcia_lib.h"
#include <stdio.h>
#include <math.h>

 void print_complex(Complex x){
  if(x.imag<0){
    printf("%f - %fi", x.real, -x.imag);
    printf("\n");
  } if(x.imag>0){
  printf("%f + %fi", x.real, x.imag);
  printf("\n");
} if(x.imag==0) {
  printf("%f", x.real);
  printf("\n");
}
}

void complex_add(Complex a, Complex b){
  //a+bi + c+di = a+c + bi+di
  Complex call;

  call.real = (a.real+b.real);
  call.imag = (a.imag+b.imag);
  print_complex(call);
}

Complex complex_sub(double r1, double i1, double r2, double i2){
  //(a+bi)-(c+di) = (a-c) + (bi-di)
  Complex call;

  call.real = (r1-r2);
  call.imag = (i1-i2);

  return call;
}

Complex complex_mult(double r1, double i1, Complex b){

  Complex call;
  call.real = (r1*b.real)-(i1*b.imag);
  call.imag = (r1*b.imag)+(i1*b.real);

  return call;
}

void complex_div(Complex a, double r2, double i2){
  Complex call;
  call.real=(a.real*r2+a.imag*i2)/((r2*r2) + (i2*i2));
  call.imag=(a.imag*r2-a.real*i2)/((r2*r2) + (i2*i2));
  print_complex (call);
}

void complex_mag(Complex a){
  double asq = a.real * a.real;
  double bsq = a.imag * a.imag;
  double apbsq = asq + bsq;
  double mag = sqrt(apbsq);
  printf("Magnitude is: %f\n", mag);

}

double complex_conjugate(Complex a){
  Complex conj;
  conj.real = a.real;
  conj.imag = -a.imag;

  return conj.imag;
}
