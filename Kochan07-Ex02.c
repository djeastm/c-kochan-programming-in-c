// Modifying Array to initialize with FOR loop
#include <stdio.h>

int main (void)
{
	int	values[10];
	int	index, i;
	
	for ( i = 0; i <= 9; ++i ) 
		values[i] = 0;
		
	for ( index = 0; index < 10;  ++index )
		printf ("values[%i] = %i\n", index, values[index]);
	return 0;
}
