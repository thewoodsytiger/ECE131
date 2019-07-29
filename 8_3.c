#include <stdio.h>

struct time{
  int hour;
  int min;
  int sec;
};

int main(void){
  struct time diff_time(struct time t1, struct time t2);

  struct time diff;
  struct time a = {3, 45, 15};
  struct time b = {9, 44, 3};
  struct time u1;
  struct time u2;

//given values for 8.3

  diff = diff_time(a, b);

  printf("The time between 3:45:15 and 9:44:03 is %d:%d:%d\n", diff.hour, diff.min, diff.sec);

//scan user input to run diff_time, just for fun

  printf("Enter a time in the form hh mm ss\n");
  scanf("%d %d %d", &u1.hour, &u1.min, &u1.sec);
  printf("Enter a second time in the form hh mm ss\n");
  scanf("%d %d %d", &u2.hour, &u2.min, &u2.sec);

  diff = diff_time(u1, u2);

  printf("The time between the input times is %d:%d:%d\n", diff.hour, diff.min, diff.sec);

  return 0;
}

struct time diff_time(struct time t1, struct time t2){
  struct time n = {0,0,0};

  if (t1.hour > t2.hour){
    n.hour=+24;
  } if (t1.sec > t2.sec){
    n.min+=60;
    n.hour-=1;
  } if (t1.sec>t2.sec){
    n.sec+=60;
    n.min-=1;
  }
  n.hour+=(t2.hour-t1.hour);
  n.min+=(t2.min-t1.min);
  n.sec+=(t2.sec-t1.sec);
  if (n.sec>=60){
    n.sec-=60;
    n.min+=1;
  } if (n.min>=60){
    n.min-=60;
    n.hour+=1;
  }

  return n;
}
