// Combined 8.4 and 5.5 to use functions
#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int	i, triangularNumber = 0;
	
	for ( i = 1; i <= n; ++i )
		triangularNumber += i;
		
	printf ("Triangular number %i is %i\n", n, triangularNumber);

	return triangularNumber;
}

int main (void)
{
	int n, number, triangularNumber, counter;
	int calculateTriangularNumber (int n);

	for ( counter = 1;  counter <= 5;  ++counter) {
		printf ("What triangular number do you want? ");
		scanf  ("%i", &number);

		calculateTriangularNumber (number);
	}
	
	return 0;
	
}