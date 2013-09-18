// Function to find a substring in a character substring
#include <stdio.h>
#include <stdbool.h>

int  findString (const char  source[], const char  s[])  
{  
    int  i, j;
    bool foundit = false;  
  
    // try each character in source   
  
    for ( i = 0;  source[i] != '\0'  &&  !foundit;  ++i ) {  
        foundit = true;  
  
        // now see if corresponding chars from s match   
  
        for ( j = 0;  s[j] != '\0' &&  foundit;  ++j )  
            if ( source[j + i] != s[j] || source[j + i] == '\0' )
            	foundit = false;
  
        if (foundit)  
           return i;  
    }  
  
    return -1;  
}  

int main (void)
{
	const char source[15] = { "a chatterbox" };
	const char search[15] = { "hat" };
	int findString (const char source[], const char s[]);

	printf ("%i", findString (source, search));

	return 0;
}