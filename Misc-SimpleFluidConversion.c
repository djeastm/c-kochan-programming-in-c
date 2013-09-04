// Simple Fluid Conversion Program
#include <stdio.h>

int main (void)
{
	int		typeMeasure1, typeMeasure2;
	float 	result, measure1;
	
	printf ("\nPick the number of your source measurement:\n\n");
	printf ("1. Quarts\n2. Pints\n3. Fluid Ounces\n\n");
	scanf ("%i", &typeMeasure1);
	
	printf ("\nHow many? ");
	scanf ("%g", &measure1);
	
	printf ("Now pick the number of your target measurement:\n\n");
	printf ("1. Quarts\n2. Pints\n3. Fluid Ounces\n\n");
	scanf ("%i", &typeMeasure2);
	
	switch (typeMeasure1) {
		case 1:
			switch (typeMeasure2) {
				case 1:
					printf ("Same measurement: %g quarts\n", measure1);
					break;
				case 2:
					result = measure1 * 2;
					printf ("%g quarts is %g pints\n", measure1, result);
					break;
				case 3:
					result = measure1 * 32;
					printf ("%g quarts is %g fluid ounces\n", measure1, result);
					break;
			}
			break;	
		case 2:
			switch (typeMeasure2) {
				case 1:
					result = measure1 / 2;
					printf ("%g pints is %g quarts\n", measure1, result);
					break;
				case 2:
					printf ("Same measurement: %g pints\n", measure1);
					break;
				case 3:
					result = measure1 * 16;
					printf ("%g pints is %g fluid ounces\n", measure1, result);
					break;
			}
			break;
		case 3:
			switch (typeMeasure2) {
				case 1:
					result = measure1 / 32;
					printf ("%g fluid ounces is %g quarts\n", measure1, result);
					break;
				case 2:
					result = measure1 / 16;
					printf ("%g fluid ounces is %g pints\n", measure1, result);
					break;
				case 3:
					printf ("Same measurement: %g fluid ounces\n", measure1);
					break;
			}
			break;
		default:
			printf( "Something's wrong with what you put in.");
			break;
	}
	return 0;
}
