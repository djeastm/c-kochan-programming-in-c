// Program to determine tomorrow's date

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int	hour;
	int	minutes;
	int	seconds;
};

struct dateAndTime
{
	struct date sdate;
	struct time stime;
};

// Function to update the time by one second

struct time timeUpdate (struct dateAndTime  event)
{
	++event.stime.seconds;

	if ( event.stime.seconds == 60 )	{			// next minute
		event.stime.seconds = 0;
		++event.stime.minutes;
	
		if ( event.stime.minutes == 60 )	{		// next hour
			event.stime.minutes = 0;
			++event.stime.hour;
			
			if ( event.stime.hour == 24 ) 			// midnight	
				event.stime.hour = 0;
		}
	}	

	return event.stime;
}

// Function to calculate tomorrow's date

struct date	 dateUpdate (struct dateAndTime  event)
{
	struct date tomorrow;
	int	numberOfDays (struct date d);

	if ( event.sdate.day != numberOfDays (event.sdate) ) {
		tomorrow.day = event.sdate.day + 1;
		tomorrow.month = event.sdate.month;
		tomorrow.year = event.sdate.year;
	}
	else if ( event.sdate.month == 12 ) {					// end of year
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = event.sdate.year + 1;
	}
	else { 											// end of month
		tomorrow.day = 1;
		tomorrow.month = event.sdate.month + 1;
		tomorrow.year = event.sdate.year;
	}

	return tomorrow;
}

// Function to find the number of days in a month

int	numberOfDays (struct date d)
{
	int 	days;
	bool 	isLeapYear (struct date d);
	const 	int	daysPerMonth[12] = 
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ( isLeapYear (d) == true  &&  d.month == 2 )
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

// Function to determine if it's a leap year

bool	isLeapYear (struct date d)
{
	bool	leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0 )  ||  
			d.year % 400 == 0 )
		leapYearFlag = true;						// It's a leap year
	else
		leapYearFlag = false;						// It's not a leap year
	
	return leapYearFlag;
}

struct dateAndTime clockKeeper (struct dateAndTime event)
{
	event.stime = timeUpdate (event);

	if ( event.stime.hour == 0  &&
		 event.stime.minutes == 0  &&
		 event.stime.seconds == 0 )
		event.sdate = dateUpdate (event);

	return event;
}

int main (void)
{
	struct dateAndTime event;
	struct dateAndTime clockKeeper (struct dateAndTime event);

	printf ("Enter today's date (mm dd yyyy): ");
	scanf ("%i%i%i", &event.sdate.month, &event.sdate.day, 
					&event.sdate.year);

	printf ("Enter the time (hh:mm:ss): ");
	scanf ("%i:%i:%i:", &event.stime.hour, &event.stime.minutes,
					&event.stime.seconds);

	event = clockKeeper (event);

	printf ("The date is %i/%i/%.2i.\n", event.sdate.month,
		event.sdate.day, event.sdate.year % 100);

	printf ("Updated time is %.2i:%.2i:%.2i\n", event.stime.hour,
					event.stime.minutes, event.stime.seconds );

	return 0;
}