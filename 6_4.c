#include<stdio.h>

int main(){
  float arr[10]={2.0,3.0,5.0,7.0,11.0,13.0,17.0,19.0,23.0,29.0};
  float sum, avg;
  int i;
  sum=0.0;
  for(i=0;i<10;i++){
    sum+=arr[i];
  }
  avg=sum/10;
  printf("The average of the first 10 prime numbers is:\n");
  printf("%f\n", avg);

  return 0;
}

