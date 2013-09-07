// Function that transposes elements in one array to another
#include <stdio.h>

int main (void)
{
	void transposeMatrix (int nRows, int nCols, 
						  int matrix1 [nRows][nCols],
						  int nRows2, int nCols2,
						  int matrix2 [nRows2][nCols2]);
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

	transposeMatrix (4, 5, matrix1, 5, 4, matrix2);
	printf ("Transposed matrix:\n");
	displayMatrix (5, 4, matrix2);

	return 0;
}

void transposeMatrix (int nRows, int nCols,
					  int matrix1 [nRows][nCols],
					  int nRows2, int nCols2, 
				 	  int matrix2 [nRows2][nCols2])
{
	int row, column;

		for ( row = 0; row < nRows; ++row )
			for ( column = 0; column < nCols; ++column )
					matrix2 [column][row] = matrix1[row][column];
}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{
	int row, column;
		
	for ( row = 0; row < nRows; ++row) {
		for ( column = 0; column < nCols; ++column )
		printf ("%5i", matrix[row][column]);
		printf ("\n");
	}
}