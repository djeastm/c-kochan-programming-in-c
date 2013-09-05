// Program to generate factorials 1-10
#include <stdio.h>

int main (void)
{

	int n, f = 1, factorial;
	
	for ( n = 1; n <= 10; n++ ) {
		factorial = n * f;
		printf (" %i     %i\n", n, factorial);
		f = factorial;
	}
	return 0;
}
