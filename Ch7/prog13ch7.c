// using multidimensional arrays and functions 
// matrix

#include <stdio.h>

int main(void)
{
	void scalar_multiply(int matrix[3][5], int scalar);
	void display_matrix(int matrix[3][5]);
	int  sample_matrix[3][5] = 
		{
			{ 7, 16, 55, 13, 12},
			{12, 10, 52,  0,  7},
			{-2,  1,  2,  4,  9}
		};
		
	printf("Original matrix:\n");
	display_matrix(sample_matrix);
	
	scalar_multiply(sample_matrix, 2);
	
	printf("\nMultiplied by 2:\n");
	display_matrix(sample_matrix);
	
	scalar_multiply(sample_matrix, -1);
	
	printf("\nThem multiplied by -1:\n");
	display_matrix(sample_matrix);
	
	return 0;
}

// function to multiply a 3 x 5 array by a scalar

void scalar_multiply(int matrix[3][5], int scalar)
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			matrix[row][column] *= scalar;
		}
	}
}

// fuction to print all elements of array

void display_matrix(int matrix[3][5])
{
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 5; column++)
		{
			printf("%5i", matrix[row][column]);
		}
		printf("\n");
	}
	
}
 


			
