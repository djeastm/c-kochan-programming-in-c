// Function to remove a substring from a string
#include <stdio.h>

char removeString (char source[], int indexNum, int charRemove)
{  
    int     i;
    char    tempString[81] = { 0 };

    for ( i = 0;  i < indexNum;  ++i )
        tempString[i] = source[i];

    for ( i += charRemove; source[i] != '\0';  ++i )
        tempString[i-charRemove] = source[i];

    for ( i = 0;  source[i] != '\0';  ++i )
        source[i] = tempString[i];

    source[i] = '\0';
}  

int main (void)
{
	char text[81] = { "the elephant man" };
	char removeString (char source[], int indexNum, int charRemove);

    removeString(text, 4, 9);

	printf ("%s", text);

	return 0;
}