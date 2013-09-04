// Validating a Credit Card Number
#include <stdio.h>

int main (void)
{
	long long int	tempCardNumber, realCardNumber;
	int				checkedDigit, checkSum, checkSum1, checkSum2;
	int				checkedDigit1, checkedDigit2;
	
	printf ("Type in the credit card number\n");
	scanf ("%lli", &realCardNumber);

	checkSum = 0;
	tempCardNumber = realCardNumber;	

	while ( tempCardNumber != 0 )	{
		checkedDigit = tempCardNumber % 10;
		checkSum += checkedDigit;
		tempCardNumber /= 100;
	}
	
	printf ("%i\n", checkSum);
	checkSum1 = checkSum;
	checkSum = 0;
	tempCardNumber = realCardNumber / 10;

	while ( tempCardNumber > 9 )	{
		checkedDigit = tempCardNumber % 10;
		checkedDigit *= 2;
		
		if ( checkedDigit > 9 ) {
			checkedDigit1 = checkedDigit % 10;
			checkedDigit2 = checkedDigit / 10;
			checkSum += (checkedDigit1 + checkedDigit2);
		}
		
		else 
			checkSum += checkedDigit;
					
		tempCardNumber /= 100;
	}
	
	if ( tempCardNumber < 9 )	{
			checkedDigit = tempCardNumber * 2;
			checkedDigit1 = checkedDigit % 10;
			checkedDigit2 = checkedDigit / 10;
			checkSum += (checkedDigit1 + checkedDigit2);
	}
	
	
	printf ("%i\n", checkSum);
	
	checkSum2 = checkSum;
	checkSum = (checkSum1 + checkSum2) % 10;

	printf ("%i\n", checkSum1 + checkSum2);

	if ( checkSum == 0 )
	{
		printf ("Yup, it's good.");
	}
	else
		printf ("Nope...\n%i", checkSum);
	
	return 0;
}
