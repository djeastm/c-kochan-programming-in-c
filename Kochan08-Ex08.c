// Solving a quadratic equation

// Function to calculate the absolute value of a number

#include <stdio.h>

float gX1, gX2;

float	absoluteValue (float x)
{
	if ( x < 0 )
		x = -x;
	return (x);
}

/* Function to compute the square root of a number.
If a negative argument is passed, then a message
is displayed and -1.0 is returned. */

float squareRoot (float x)
{
	const double epsilon = .000001;
	float guess = 1.0;
	float absoluteValue (float x);

	if ( x < 0 )
	{
		printf ("Roots are imaginary\n");
		return -1.0;
	}

	while ( absoluteValue ((guess * guess) / x - 1.0) >= epsilon ){
		guess = ( x / guess + guess ) / 2.0;
	}

	return guess;
}

float	quadratic (int a, int b, int c)
{
	float d;
	float squareRoot (float x);

	d = ((b * b) - (4 * a * c));

	gX1 = (-b + squareRoot(d)) / (2 * a);
	gX2 = (-b - squareRoot(d)) / (2 * a);
}

int main (void)
{
	int a, b, c;

	float quadratic (int a, int b, int c);

	printf ("This is a quadratic equation\n");
	printf ("ax^2 + bx + c = 0\n");
	printf ("What is the value of a? \n");
	scanf ("%i", &a);
	printf ("What is the value of b? \n");
	scanf ("%i", &b);
	printf ("What is the value of c? \n");
	scanf ("%i", &c);

	quadratic (a,b,c);

	printf ("x1 = %f\n", gX1);
	printf ("x2 = %f\n", gX2);

	return 0;
}