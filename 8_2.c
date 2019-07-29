#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};


//Scan date input and return N

int in_date(void)
{
	int year_f(int year, int month);
	int month_g(int month);

	int n;
	struct date d;

	printf("Please enter the date with format mm dd yyyy: ");
	scanf("%d%d%d", &d.month, &d.day, &d.year);

	n = (1461 * year_f(d.year, d.month)) / 4 + (153 * month_g(d.month)) / 5 + d.day;

	return n;
}

// f(year, month)

int year_f(int year, int month)
{
	if (month <= 2)
		year -= 1;

	return year;
}

// g(month)

int month_g(int month)
{
	if (month <= 2)
		month += 13;
	else
		month += 1;

	return month;
}

// Program to calculate the number of days between the two dates

int date_diff(int n1, int n2)
{
	int result = n2 - n1;

	if (result < 0)
		result *= -1;

	return result;
}

int main(void)
{
	int in_date(void);
	int date_diff(int n1, int n2);

	int date1, date2;

	date1 = in_date();
	date2 = in_date();

	printf("N^2=%d, N=%d\n", date1, date2);
	printf("The days between these dates is %i\n", date_diff(date1, date2));

	return 0;
}
