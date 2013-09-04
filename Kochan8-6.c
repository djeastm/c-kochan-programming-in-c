/* Function to find the greatest common divisor of two nonnegative integer values using a returning function*/

#include <stdio.h>

int gcd (int u, int v)				// changed ‘void’ to ‘int’
{
	int	temp;
	
	while ( v != 0 )	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;				// return u to main
}

int main (void)
{
	int result;				// used variable ‘result’ to hold values
	
	result = gcd (150, 35);			// printed each in main
	printf ("The gcd of 150 and 35 is %i\n", result);
	
	result = gcd (1026, 405);
	printf ("The gcd of 150 and 35 is %i\n", result);
						// except this last one, because it’s the last returned value
	printf ("The gcd of 150 and 35 is %i\n", gcd (83, 240));
	
	return 0;
}
