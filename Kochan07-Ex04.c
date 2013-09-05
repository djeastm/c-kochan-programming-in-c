// Calculate average of 10 floating point values

#include <stdio.h>

int main (void)
{
	float 	values[10] = { 10, 5, 7, 23, 61,  24, 626, 723, 341, 513 };
	float	sum;
	int	i;
	
	sum = 0;
	
	for ( i = 0; i <= 9; ++i)
		sum += values[i];
		
	printf ("Average = %g", sum / 10);
	return 0;
}
