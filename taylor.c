#include <stdio.h>
#include <math.h>

double boom(double b, double e){
double product = 1;
while (e != 0){
       product *= (double) b;
        e--;
      }
return product;
}

double factorial(double in){
double i;
double out = 1;
for(i=1;i<=in;i++)
out=out * i;
return out;
}

double mysin(double theta){
double exp;
int i;
double temp = 0;
double thetarad = theta*M_PI/180;
for(i=1,exp=1; i<=8; i++,exp+=2){
  if(i%2==0){
    temp -= boom(thetarad, exp)/factorial(exp);
  }else{
    temp += boom(thetarad, exp)/factorial(exp);
  }
}
return temp;
}


double mycos(double theta){
double exp;
int i;
double temp = 1;
double thetarad = theta*M_PI/180;
for(i=1,exp=0; i<=8; i++,exp+=2){
  if (i%2==0){
    temp -= boom(thetarad, exp)/factorial(exp);
  }else if(i==1){
    temp=temp;
  } else {
    temp += boom(thetarad, exp)/factorial(exp);
  }
}
return temp;
}

int main (void){

double theta;
printf("Enter an angle in degrees for sine estimation: \n");
scanf("%lf", &theta);
printf("sin(%.3lf)= %.3lf\n", theta, mysin(theta));

//For Testing
for (double th = 0; th <= 180; th += 6) {
theta = th*M_PI/180;
printf ("Error in mysine is: th=%3lf error=%lf\n", th, sin(theta)-mysin(theta));
}
printf("\n\n");
printf("Enter an angle in degrees for cosine estimation: \n");
scanf("%lf", &theta);
printf("cos(%.3lf)= %.3lf\n", theta, mycos(theta));

//Testing
for (double th = 0; th <= 180; th += 6) {
theta = th*M_PI/180;
printf ("Error in mycos is: th=%3lf error=%lf\n", th, cos(theta)-mycos(theta));
}
return 0;
}
