// Function that returns 1 if its argument is a prime number
#include <stdio.h>
#include <stdbool.h>

int prime (int p)
{
	int		d;
	bool	isPrime;
	
	if ( p <= 4 )
		printf ("You can figure that out by yourself");

	else
		isPrime = true;

		for ( d = 3; d < p  &&  isPrime == true ; d += 2 ) {
			if ( p % d  ==  0 ) {
				isPrime = false;
				return 0;
			}
		}
		if (isPrime != false ) 
				return 1;	
	return 0;		
}

int main (void)
{
	int p;
	
	printf ("Enter number to test for prime\n");
	scanf ("%i", &p);
	printf ("\n%i", prime (p));

}