// Function that raises an integer to a positive integer power
#include <stdio.h>

long int x_to_the_n (int x, int n)
{
	long int result = 1;

	while ( n > 0 )	{
		result *= x;
		--n;
	}

	return result;
}

int main (void)
{
	int x, n;
	long int x_to_the_n (int x, int n);

	printf ("What is your x? \n");
	scanf ("%i", &x);

	printf ("\nTo what power do you want that x? \n");
	scanf ("%i", &n);

	printf ("\nHere is your result = %li", x_to_the_n (x, n));

	return 0;
}