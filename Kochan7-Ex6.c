// Generating Fibonacci Numbers without an Array

#include <stdio.h>

int main (void)
{
	int	fib1, fib2, fib3, i;
	
	fib1 = 0;	// by definition
	fib2 = 1;	// ditto
	
	printf ("%i %i ", fib1, fib2);
	
	for ( i = 0; i < 13; ++i ) {
		fib3 = fib1 + fib2;
		printf ("%i ", fib3);
		fib1 = fib2;
		fib2 = fib3;
	}
	
	return 0;
}
