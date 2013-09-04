// Generating Fibonacci Numbers specifying max
#include <stdio.h>

int main (void)
{
	int maxFib;
	
	printf ("To what number of digits do you want to calculate Fibonacci numbers?");
	scanf ("%i", &maxFib);
	
	int	Fibonacci[maxFib], i;
	
	Fibonacci[0] = 0;	// by definition
	Fibonacci[1] = 1;	// ditto
	
	for ( i = 2; i < maxFib; ++i )
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];
		
	for ( i = 0; i < maxFib; ++i )
		printf ("%i\n", Fibonacci[i]);
	
	return 0;
}
