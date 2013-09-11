// Program to determine day of the week

#include <stdio.h>

struct date
{
	int month;
	int day;
	int year;
};

struct dayWeek
{
	char name[9];
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

int dateCalc (struct date dateToCalc)
{
	float	dCResult;
	int i;

	dCResult = ((1461 * yearMonth (dateToCalc) / 4 +
			153 * month (dateToCalc) / 5 + dateToCalc.day)
			- 621049 );

	i = dCResult;

	return i;
}

int main (void)
{
	int i;
	int dateCalc (struct date dateToCalc);
	struct date dateOne;
	
	printf ("Enter the date (mm dd yyyy): ");
	scanf ("%i%i%i", &dateOne.month, &dateOne.day, &dateOne.year);

	const struct dayWeek  week[7] = 
		{ { 'S', 'u', 'n', 'd', 'a', 'y'} ,
		  { 'M', 'o', 'n', 'd', 'a', 'y'} , 
		  { 'T', 'u', 'e', 's', 'd', 'a', 'y'} ,
		  { 'W', 'e', 'd', 'n', 'e', 's', 'd', 'a', 'y'} ,
		  { 'T', 'h', 'u', 'r', 's', 'd', 'a', 'y'} ,
		  { 'F', 'r', 'i', 'd', 'a', 'y'} ,
		  { 'S', 'a', 't', 'u', 'r', 'd', 'a', 'y'} };

	i = dateCalc (dateOne) % 7;
	
	printf ("%c%c%c%c%c%c%c%c%c",
			week[i].name[0], week[i].name[1],
			week[i].name[2], week[i].name[3],
			week[i].name[4], week[i].name[5],
			week[i].name[6], week[i].name[7],
			week[i].name[8]);

	return 0;
}