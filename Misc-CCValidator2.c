//Validating a Credit Card Number using a Function
#include <stdio.h>

int checkSum (long long int	realCardNumber)
{
	long long int	tempCardNumber;
	int				checkedDigit, checkSum, checkSum1, checkSum2;
	int				checkedDigit1, checkedDigit2;

	checkSum = 0;
	tempCardNumber = realCardNumber;	

	while ( tempCardNumber != 0 )	{			
		checkedDigit = tempCardNumber % 10;
		checkSum += checkedDigit;
		tempCardNumber /= 100;			// to move two digits down
	}
	
	printf ("%i\n", checkSum);
	checkSum1 = checkSum;
	checkSum = 0;
	tempCardNumber = realCardNumber / 10;		// to shift the numbers

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
	
	if ( tempCardNumber < 9 )	{			// to catch the last digit and parse it
			checkedDigit = tempCardNumber * 2;
			checkedDigit1 = checkedDigit % 10;
			checkedDigit2 = checkedDigit / 10;
			checkSum += (checkedDigit1 + checkedDigit2);
	}
	
	
	printf ("%i\n", checkSum);
	
	checkSum2 = checkSum;
	checkSum = (checkSum1 + checkSum2) % 10;		// to see if checkSum works

	printf ("%i\n", checkSum1 + checkSum2);

	return checkSum;
}

int main (void)
{
	long long int	realCardNumber;
	int		checkSum (long long int	realCardNumber);
	
	printf ("Type in the credit card number\n");
	scanf ("%lli", &realCardNumber);

	if ( checkSum(realCardNumber) == 0 )
	{
		printf ("Yup, it's good.");
	}
	else
		printf ("Nope...\n%i", checkSum(realCardNumber));
	
	return 0;
}
