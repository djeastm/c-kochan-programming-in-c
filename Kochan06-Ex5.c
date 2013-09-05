// Program to reverse the digits of a number (allows for negatives)

#include <stdio.h>

int main (void)
{
	int number, right_digit;

	printf ("Enter your number.\n");
	scanf ("%i", &number);

	if ( number < 0 ) {
		while ( number != 0 ) {
			right_digit = number % 10;
			printf ("%i", -right_digit);
			number = number / 10;
		}		
		printf ("-");
	}
	else
		while ( number != 0 ) {
			right_digit = number % 10;
			printf ("%i", right_digit);
			number = number / 10;
		}

	printf ("\n");
	
	return 0;
}

/*Author’s Solution - Program to reverse the digits of a number (revised)   

#include <stdio.h>  
#include <stdbool.h>
  
int main (void)  
{  
    int   number, right_digit;  
    bool  isNegative = false;  
  
    printf ("Enter your number.\n");  
    scanf ("%i", &number);  
  
// if keyed-in number is negative, make it positive, but remember it was negative
  
    if ( number < 0 ) {  
        number = -number;  
        isNegative = true;  
    }  
  
    do {  
        right_digit = number % 10;  
        printf ("%i", right_digit);  
        number = number / 10;  
    }  
    while ( number != 0 );  
  
    if (isNegative == true)  
        printf ("-");  
  
    printf ("\n");  
    return 0;  
}  
*/
// Alternate Version (I couldn’t get stdbool.h to work, so just changed back to normal):
/* 
#include <stdio.h>  
  
int main (void)  
{  
    int   number, right_digit;  
    _Bool  isNegative = 0;  
  
    printf ("Enter your number.\n");  
    scanf ("%i", &number);  
  
    // if keyed-in number is negative, make it positive, but remember it was negative
  
    if ( number < 0 ) {  
        number = -number;  
        isNegative = 1;  
    }  
  
    do {  
        right_digit = number % 10;  
        printf ("%i", right_digit);  
        number = number / 10;  
    }  
    while ( number != 0 );  
  
    if (isNegative == 1)  
        printf ("-");  
  
    printf ("\n");  
    return 0;  
}  
*/
