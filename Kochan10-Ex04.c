// Function to extract a substring of a character substring
#include <stdio.h>

char substring (char source[], int start, int count, char result[])
{
	int		i;
	int 	totalCount = 0;
		
	for (i = 0;  source[i] != '\0';  ++i)
		++totalCount;

	if (start + count > totalCount )
		count = totalCount - start;
	
	for (i = 0;  i < count  &&  source[i] != '\0'; ++i)	
		result[i] = source[i + start];
	
	result[i] = '\0';
}

int main (void)
{
	char source[15] = { "two words" };
	int  start = 4;
	int  count = 20;
	char result[15];
	char substring (char source[], int start, int count, char result[]);

	substring (source, start, count, result);

	printf ("%s", result);

	return 0;
}