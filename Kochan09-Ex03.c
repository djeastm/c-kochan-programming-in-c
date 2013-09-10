// Program to determine the number of days between two days

#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time elapsedTime (struct time time1, struct time time2)
{
	struct time timeCalc;

	timeCalc.seconds = time2.seconds - time1.seconds;

		if ( timeCalc.seconds < 0 ) {
			timeCalc.seconds = 60 + timeCalc.seconds;
			--time2.minutes;
		}

	timeCalc.minutes = time2.minutes - time1.minutes;

		if ( timeCalc.minutes < 0) {
			timeCalc.minutes = 60 + timeCalc.minutes;
			--time2.hour;
		}

	timeCalc.hour = time2.hour - time1.hour;

		if ( timeCalc.hour < 0 ) {
			timeCalc.hour = 24 + timeCalc.hour;
		}

	return timeCalc;
}

int main (void)
{
	struct time time1, time2, finish;
	struct time elapsedTime (struct time time1, struct time time2);
		
	printf ("Enter the first time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

	printf ("Enter the second time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);

finish = elapsedTime (time1, time2);

	printf ("Time elapsed between those two dates: %i:%.2i:%.2i", 
		finish.hour, finish.minutes, finish.seconds);

	return 0;
}