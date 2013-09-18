// Function to insert a string into another string
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


/* insert string s into string source starting at i 
   This function uses the stringLength function defined 
   in the chapter. 
 
   Note: this function assumes source is big enough 
         to store the inserted string (dangerous!)   */  

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

bool   replaceString (char source[], char s1[], char s2[])
{
    int index;

    index = findString (source, s1);

       if ( index == -1 )  
       return  false;  

    removeString (source, index, stringLength(s1));
    
    insertString (source, s2, index);

    return true; 
}

int main (void)
{
	char   text[81] = { "the 1 wrong son" };
    int    findString (const char source[], const char s[]);
    char   removeString (char source[], int indexNum, int charRemove);
    int    stringLength (const char  string[]);
	void   insertString (char source[], char  s[], int  i);
    bool   replaceString (char source[], char s1[], char s2[]);

    replaceString(text, "1", "one");

    printf ("%s", text);

	return 0;
}