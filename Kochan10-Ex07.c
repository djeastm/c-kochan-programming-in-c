// Function to insert a string into another string

/* insert string s into string source starting at i 
   This function uses the stringLength function defined 
   in the chapter. 
 
   Note: this function assumes source is big enough 
         to store the inserted string (dangerous!)   */  
         
#include <stdio.h>

int stringLength (const char  string[])
{
    int  count = 0;

    while ( string[count]  !=  '\0' )
        ++count;

    return count;
}

void  insertString (char  source[], char  s[], int  i)  
{  
   int  j, lenS, lenSource;  
  
   /* first, find out how big the two strings are */  
  
   lenSource = stringLength (source);  
   lenS = stringLength (s);  
  
   /* sanity check here -- note that i == lenSource 
      effectively concatenates s onto the end of source */  
  
   if (i > lenSource)  
      return;  
  
   /* now we have to move the characters in source 
      down from the insertion point to make room for s. 
      Note that we copy the string starting from the end 
      to avoid overwriting characters in source. 
      We also copy the terminating null (j starts at lenS)  
      as well since the final result must be null-terminated */  
  
   for ( j = lenSource;  j >= i;  --j )  
      source [lenS + j] = source [j];  
  
   /* we've made room, now copy s into source at the  
      insertion point */  
  
   for ( j = 0;  j < lenS; ++j )  
       source [j + i] = s[j];  
} 

int main (void)
{
	char text[81] = { "the wrong son" };
    int stringLength (const char  string[]);
	void  insertString (char  source[], char  s[], int  i);

    insertString(text, "per", 10);

	printf ("%s", text);

	return 0;
}