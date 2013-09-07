/* Program to convert a positive integer to another base 
and insist on a valid base and put in multiple values with
killswitch*/

#include <stdio.h>

int 	  gConvertedNumber[64];
long int  gNumberToConvert = 1;
int  	  gBase;
int 	  gDigit = 0;
int 	  gGoSwitch = 1;

void	getNumberAndBase (void)
{
	printf ("\nNumber to be converted? \n");
	printf ("Enter '0' if you're done. \n");
	scanf ("%ld", &gNumberToConvert);

	if ( gNumberToConvert == 0)
		gGoSwitch = 0;
	
	else if ( gNumberToConvert != 0) {
		gGoSwitch = 1;
		printf ("\nBase? ");
		scanf ("%i", &gBase);
		
		while ( gBase < 2  || gBase > 16 )	{	
			printf ("\nInvalid base\nBase? \n");
			scanf ("%i", &gBase);
		}
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

	while ( gGoSwitch != 0) {
		getNumberAndBase ();
		if ( gGoSwitch != 0 ) {
			convertNumber ();
			displayConvertedNumber ();
		}
	}
	
	return 0;
}