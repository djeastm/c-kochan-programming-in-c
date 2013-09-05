// Program to write out digits of a number in English  
  
#include <stdio.h>  
  
int main (void)  
{  
    	int    number, left_digit, pointer;  
  
  	printf ("Enter your number (8 digits or less).\n");  
   	scanf ("%i", &number);  
  
    	if ( number == 0 )
		printf ("zero");
	
	if ( number <= 99999999 && number >= -99999999 ) {
	
		if ( number < 0 ) {  
    			number = -number;  
			printf ("Negative "); 
    		}

		for ( pointer = 100000000 ; pointer != 1 ; pointer = pointer / 10) {
			if ( pointer <= ( number * 10) ) {  
        			left_digit = ( number % pointer ) / (pointer / 10 );  
				switch (left_digit) {
				case 1:
					printf ("one ");
					break;
				case 2:
					printf ("two ");
					break;	
				case 3:
					printf ("three ");
					break;	
				case 4:
					printf ("four ");
					break;	
				case 5:
					printf ("five ");
					break;	
				case 6:
					printf ("six ");
					break;	
				case 7:
					printf ("seven ");
					break;	
				case 8:
					printf ("eight ");
					break;	
				case 9:
					printf ("nine ");
					break;	
				case 0:
					printf ("zero ");
					break;	
				}
			}
		}
	}
	else
		printf ("Number is not within range");

	printf ("\n");  
	return 0;  
}  
