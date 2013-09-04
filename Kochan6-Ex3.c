// Display result of division to three-decimal-place accuracy.

#include <stdio.h>

int main (void)
{
	int 	a, b;
	
	printf ("Enter two integers: \n");
	scanf ("%i%i", &a, &b);
	
	if ( b == 0 )
		printf ("Cannot divide by 0");
	else
		printf ("%i / %i is %.3f\n", a, b, (float) a / b);
	
	return 0;
}
