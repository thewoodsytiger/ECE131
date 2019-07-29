#include <stdio.h>

struct date{
  int day;
  int month;
  int year;
};

struct time{
  int sec;
  int min;
  int hour;
};

struct dateAndTime {
  struct date sdate;
  struct time stime;
};

int main (void){
struct dateAndTime clockKeeper(struct dateAndTime dateTime);
struct dateAndTime dateTime;
struct time tempstime;
struct date tempsdate;

//get date and time for struct dateAndTime

printf("Enter your date in the format: dd mm yyyy\n");
scanf("%d %d %d", &tempsdate.day, &tempsdate.month, &tempsdate.year);
printf("\nEnter your time in the format: hh mm ss\n");
scanf("%d %d %d", &tempstime.hour, &tempstime.min, &tempstime.sec);

dateTime.stime=tempstime;
dateTime.sdate=tempsdate;

dateTime=clockKeeper(dateTime);

printf("Clock Keeper:\n");
printf("%.2d-%.2d-%.4d, %.2d:%.2d:%.2d\n",  dateTime.sdate.day, dateTime.sdate.month, dateTime.sdate.year,
        dateTime.stime.hour, dateTime.stime.min, dateTime.stime.sec);

return 0;
}

struct time  timeUpdate (struct time now)
{
    ++now.sec;

    if ( now.sec == 60 )  {     // next minute
        now.sec = 0;
        ++now.min;

        if ( now.min == 60 ) {  // next hour
            now.min = 0;
            ++now.hour;

            if ( now.hour == 24 ) // midnight
               now.hour = 0;
        }
    }

    return now;
}

struct dateAndTime clockKeeper(struct dateAndTime dateTime){

  struct time timeUpdate(struct time now);
  struct date upDate(struct date dU);

  dateTime.stime=timeUpdate(dateTime.stime);

  dateTime.sdate=upDate(dateTime.sdate);

  return dateTime;
}

struct date upDate(struct date dU)
{ // Function to update the date by one day if hour == 24

	int numberOfDays(struct date d);

	struct date tomorrow;

	if (dU.day != numberOfDays(dU))
	{
		tomorrow.day = dU.day+1;
		tomorrow.month = dU.month;
		tomorrow.year = dU.year;
	}
	else if (dU.month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = dU.year + 1;
	} else {
  tomorrow.day = 1;
  tomorrow.month = dU.month+1;
  tomorrow.year = dU.year;
}
return tomorrow;
}


int numberOfDays(struct date d)
{ // days in month

	int leapYear(struct date d);


	int days;
	const int daysPerMonth[12] = 	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (leapYear(d)==1 && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}


int leapYear(struct date d)
{	// Leap Year Scenario

	int lY;

	if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
		lY = 1;
	else
		lY = 0;

	return lY;
}
