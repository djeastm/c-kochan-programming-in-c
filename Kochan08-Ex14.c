/* Program to sort an array of integers into ascending and descending 
with a globally defined array */
#include <stdio.h>

int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17, 22, 6, 11 };

void sort (int a[], int n, int sortDirect)
{
	int i, j, temp;
	
	for ( i = 0; i < n - 1; ++i )
		for ( j = i + 1; j < n; ++j )
			if ( (sortDirect == 0 && a[i] < a[j]) ||  
                 (sortDirect == 1 && a[i] > a[j]) )  {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
			}	
	
}

int main (void)
{
	int i, sortDirect;
	
	void sort (int a[], int n, int sortDirect);

	printf ("What direction do you want to sort? \n");
	printf ("Ascending = 1, Descending = 0\n");
	scanf ("%i", &sortDirect);

	printf ("\nThe array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);
	
	sort (array, 16, sortDirect);

	printf ("\n\nThe array after the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf ("%i ", array[i]);
		printf ("\n");

	return 0;
}