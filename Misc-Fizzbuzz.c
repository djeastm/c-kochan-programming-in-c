// FizzBuzz

#include <stdio.h>

int main (void)
{
	int n;

	for ( n = 1; n <= 100; ++n)
		if ( n % 3 == 0  &&  n % 5 == 0 )
			printf ("fizzbuzz\n");
		else if ( n % 5 == 0 )
			printf ("buzz\n");
		else if ( n % 3 == 0 )
			printf ("fizz\n");
		else
			printf ("%i\n", n);

	return 0;
}
