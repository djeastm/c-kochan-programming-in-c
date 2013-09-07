// Function that finds the Least Common Multiple of two integers
#include <stdio.h>

int gcd (int u, int v)				
{
	int	temp;
	
	while ( v != 0 )	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;			
}

int lcm (int u, int v)
{
	int result;

	if ( u < 0  ||  v < 0 )	{
		printf ("Must be greater than zero");
		return 0;
	}

	else 
		return u * v / gcd (u, v);
}

int main (void)
{
	int u, v;

	printf ("Find the Least Common Multiple of what two integers? \n");
	scanf ("%i\n%i", &u, &v);

	printf ("\n\nHere ya go: %i", lcm (u, v));
}