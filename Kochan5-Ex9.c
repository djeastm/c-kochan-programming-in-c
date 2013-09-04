// Changing FOR loops to WHILE loops

/* 5.2 Program to calculate the 200th triangular number
Introduction of the for statement */

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	
	triangularNumber = 0;
	n = 1;
	
	while ( n <= 200 ) {
	triangularNumber = triangularNumber + n;
	n += 1;
	}
	
	printf ("The 200th triangular number is %i\n", triangularNumber);
		
	return 0;
}
/*
// 5.3 Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	
	printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf (" n  Sum from 1 to n\n");
	printf ("--- ---------------\n");
	
	triangularNumber = 0;
	n = 1;

	while ( n <= 10 ) {
	triangularNumber += n;
	printf (" %2i           %2i\n", n, triangularNumber);
	++n;

	}

	return 0;
}

// 5.4 Triangular Numbers
#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber;
	printf ("What triangular number do you want? ");
	scanf ("%i", &number);
	
	triangularNumber = 0;
	n = 1;
	
	while ( n <= number ) {
		triangularNumber += n;
		++n;
	}
	printf ("Triangular number %i is %i\n", number, triangularNumber);

return 0;
}

// 5.5 Triangular numbers with nested loops, specified

#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber, counter, max;

	printf ("Enter in the number of TNs you want to calculate:\n");
	scanf ("%i", &max);

	counter = 1;
	while ( counter <= max ) {
		printf ("What triangular number do you want? ");
		scanf ("%i", &number);
	
		triangularNumber = 0;
		n = 1;
	
while ( n <= number ) {
			triangularNumber += n;
			++n;
		}

	printf ("Triangular number %i is %i\n\n", number, triangularNumber);
	
	++counter;
	}

return 0;
}
