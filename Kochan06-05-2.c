// Program to determine if a year is a leap year (Ver. 2)

#include <stdio.h>

int main (void)
{
	int	year;

	printf ("Enter the year to be tested: ");
	scanf ("%i", &year);
	
	if ( ( year % 4 == 0  &&  year % 100 != 0 )  ||  year % 400  
== 0 )
		printf ("It's a leap year.\n");
	else
		printf ("Nope, it's not a leap year.\n");

	return 0;
}
