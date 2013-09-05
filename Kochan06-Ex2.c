// Determine if first integer is divisible by second integer

#include <stdio.h>

int main (void)
{
	int a, b;
	
	printf ("Enter two integers: \n");
	scanf ("%i%i", &a, &b);
	
	if ( b == 0 )
		printf ("Cannot divide by 0");
	else if ( a % b == 0 )
		printf ("Yes, %i is evenly divisible by %i", a, b);
	else
		printf ("No, %i is not evenly divisible by %i", a,  
b);
	
	return 0;
}
