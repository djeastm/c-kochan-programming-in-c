// Function that returns the result of elements in an array
#include <stdio.h>

int main (void)
{
	void transposeMatrix (int nRows, int nCols, 
						  int matrix1 [nRows][nCols],
						  int matrix2 [nRows][nCols]);
	void displayMatrix (int nRows, int nCols, int matrix1[nRows][nCols]);
	int matrix1[4][5] = 
		{
			{ 1, 2, 3, 4, 5, },
			{ 6, 7, 8, 9, 10, },
			{ 11, 12, 13, 14, 15 },
			{ 16, 17, 18, 19, 20 }
		};
	int matrix2[5][4] = {};

	printf ("Original matrix:\n");
	displayMatrix (4, 5, matrix1);

	transposeMatrix (4, 5, matrix1);

	printf ("Transposed matrix:\n");
	displayMatrix (matrix1);

	return 0;
}

int transposeMatrix (int array1 [4][5], int array2 [5][4])
{
	int sum = 0, i;

	for ( i = 0;  i < n;  ++i)
		sum += array[i];

	return sum;

}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);
{
	int row, column;
		
	for ( row = 0; row < nRows; ++row) {
		for ( column = 0; column < nCols; ++column )
		printf ("%5i", matrix[row][column]);
		printf ("\n");
	}
}