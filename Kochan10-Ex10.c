// Program to sort an array of integers into ascending or descending order with globally defined array
#include <stdio.h>
#include <string.h>

struct entry
{
    char    word[15];
    char    definition[50];
};
                    
void sort (struct entry a[], int n, int sortDirect)
{
    int i, j, k;
    char temp[15];
    
    for ( i = 0; i < n - 1; ++i )
        for ( j = i + 1; j < n; ++j )
            if ( (sortDirect == 0 && strncmp(a[i].word, a[j].word, 2) < 0 ) ||  
                 (sortDirect == 1 && strncmp(a[i].word, a[j].word, 2) > 0 ) )
            {
                    for ( k = 0;  a[i].word != '\0';  ++k )
                        temp = a[i].word;
                    for ( k = 0;  a[i].word != '\0';  ++k )
                        a[i].word = a[j].word;
                    for ( k = 0;  a[i].word != '\0';  ++k )
                        a[j].word = temp;
            }   
    
}

int main (void)
{
    struct entry  dictionary[100] = 
    {   { "aardvark", "a burrowing African mammal" },
        { "ahoy", "a nautical call of greeting"},
        { "acumen", "mentally sharp; keen" },
        { "addle", "to become confused" },
        { "ajar", "partially opened" },
        { "affix", "to append; attach" },
        { "agar", "a jelly made from seaweed" },
        { "abyss", "a bottomless pit" },
        { "aigrette", "an ornamental cluster of feathers" },
        { "aerie", "a high nest" } };


    int i, sortDirect;
    
    void sort (struct entry a[], int n, int sortDirect);

    printf ("What direction do you want to sort? \n");
    printf ("Ascending = 1, Descending = 0\n");
    scanf ("%i", &sortDirect);

    printf ("\nThe array before the sort:\n\n");

    for ( i = 0; i < 10; ++i )
        printf ("%-15s  %-30s\n", dictionary[i].word, dictionary[i].definition);
    
    sort (dictionary, 10, sortDirect);

    printf ("\n\nThe array after the sort:\n");

    for ( i = 0; i < 10; ++i )
        printf ("%-15s  %-30s\n", dictionary[i].word, dictionary[i].definition);
        printf ("\n");

    return 0;
}
