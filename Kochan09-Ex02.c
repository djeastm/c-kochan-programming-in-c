// Program to determine the number of days between two days

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

int month (struct date d)
{
	int mResult;

	if ( d.month <= 2 )
		mResult = d.month + 13;
	else
		mResult = d.month + 1;
	
	return mResult;
}

int yearMonth (struct date d)
{
	int yMResult;

	if ( d.month <= 2 )
		yMResult = d.year - 1;
	else
		yMResult = d.year;

	return yMResult;
}

float dateCalc (struct date dateToCalc)
{
	float	dCResult;

	dCResult = 1461 * yearMonth (dateToCalc) / 4 +
			153 * month (dateToCalc) / 5 + dateToCalc.day;

	return dCResult;
}

int main (void)
{
	float dateCalc (struct date dateToCalc);
	struct date dateOne, dateTwo;
	
	printf ("Enter the first date (mm dd yyyy): ");
	scanf ("%i%i%i", &dateOne.month, &dateOne.day, &dateOne.year);

	printf ("Enter the second date (mm dd yyyy): ");
	scanf ("%i%i%i", &dateTwo.month, &dateTwo.day, &dateTwo.year);

	printf ("Number of days between those two dates: %g", dateCalc (dateTwo) - 
													dateCalc (dateOne));

	return 0;
}