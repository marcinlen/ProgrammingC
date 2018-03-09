// multidimensional variable length array

#include <stdio.h>

int main(void)
{
	void scalar_multiply(int n_rows, int n_columns, int matrix[n_rows][n_columns], int scalar);
	void  display_matrix(int n_rows, int n_columns, int matrix[n_rows][n_columns]);
	
	int sample_matrix[3][5] =
		{
			{ 7, 16, 55, 13, 12},
			{12, 10, 52,  0,  7},
			{-2,  1,  2,  4,  9}
		};
		
	printf("Original matrix:\n");
	display_matrix(3, 5, sample_matrix);
	
	scalar_multiply(3, 5, sample_matrix, 2);
	printf("\nMultiply by 2:\n");
	display_matrix(3, 5, sample_matrix);
	
	scalar_multiply(3, 5, sample_matrix, -1);
	printf("\nThen multiply by -1:\n");
	display_matrix(3, 5, sample_matrix);
	
	return 0;
}

// function to multiply a matrix by scalar

void scalar_multiply(int n_rows, int n_columns, int matrix[n_rows][n_columns], int scalar)
{
	for (int row = 0; row < n_rows; row++)
	{
		for (int column = 0; column < n_columns; column++)
		{
			matrix[row][column] *= scalar;
		}
	}
}

// function to display a matric to screen

void display_matrix(int n_rows, int n_columns, int matrix[n_rows][n_columns])
{
	for (int row = 0; row < n_rows; row++)
	{
		for (int column = 0; column < n_columns; column++)
		{
			printf("%5i", matrix[row][column]);
		}
		printf("\n");
	}
}	
	
