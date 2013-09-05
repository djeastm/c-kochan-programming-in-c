// Demonstrating an Array of Counters (specification)
#include <stdio.h>

int main (void)
{
	int	ratingCounters[11], i, response;
	int 	numResponses;
	
	printf ("How many responses do you have? \n");		// Set # of responses
	scanf ("%i", &numResponses);
	
	for ( i = 1; i <= 10; ++i )
		ratingCounters[i] = 0;
		
	printf ("Enter your responses\n");
	
	for ( i = 1; i <= numResponses; ++i ) {
		scanf ("%i", &response);
		
		if ( response < 1  ||  response > 10 )
			printf ("Bad response: %i\n", response);
		else
			++ratingCounters[response];
	}
	
	printf ("\n\nRating  Number of Responses\n");
	printf ("------  -------------------\n");
	
	for ( i = 1; i <= 10; ++i )
		printf ("%4i%14i\n", i, ratingCounters[i]);
		
	return 0;
}
