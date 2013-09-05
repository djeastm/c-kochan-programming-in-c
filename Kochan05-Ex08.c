// Triangular numbers with nested loops, specified

#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber, counter, max;

	printf ("Enter in the number of TNs you want to calculate 
\n");
	scanf ("%i", &max);

	for ( counter = 1; counter <= max; ++counter ) {
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);
	
	triangularNumber = 0;
	
	for ( n = 1; n <= number; ++n )
	triangularNumber += n;

	printf ("Triangular number %i is %i\n\n", number, 	 
triangularNumber);
	}

return 0;
}
