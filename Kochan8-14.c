// Program to convert a positive integer to another base

#include <stdio.h>

int 	  gConvertedNumber[64];
long int  gNumberToConvert;
int  	  gBase;
int 	  gDigit = 0;

void	getNumberAndBase (void)
{
	printf ("Number to be converted? ");
	scanf ("%ld", &gNumberToConvert);

	printf ("Base?");
	scanf ("%i", &gBase);
	
	if ( gBase < 2  || gBase > 16 )	{	
		printf ("Invalid base\n");
		gBase = 10;
	}
}

void	convertNumber (void)
{
	do	{
		gConvertedNumber[gDigit] = gNumberToConvert % gBase;
		++gDigit;
		gNumberToConvert = gNumberToConvert / gBase;
	}
	while	( gNumberToConvert != 0 );
}

void	displayConvertedNumber (void)
{
	const	char baseDigits [16] = {
				'0', '1', '2', '3', '4', '5', '6', '7',
				'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int			 nextDigit;

	printf ("Converted number = ");
	
	for ( --gDigit;  gDigit >= 0 ;  --gDigit )	{
		nextDigit = gConvertedNumber[gDigit];
		printf ("%c", baseDigits[nextDigit]);
	}

	printf ("\n");
}

int main (void)
{
	void	getNumberAndBase (void), convertNumber (void),
			displayConvertedNumber (void);

	getNumberAndBase ();
	convertNumber ();
	displayConvertedNumber ();

	return 0;
}