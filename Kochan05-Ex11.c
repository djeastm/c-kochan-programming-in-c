// Calculate the sum of digits of a number

#include <stdio.h>

int main (void)
{

	int number, right_digit, sum;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	sum = 0;
	while ( number != 0 ) {
		right_digit = number % 10;
		sum += right_digit; 
		number = number / 10;
	}
	
	printf ("%i", sum);
	
	return 0;
}
