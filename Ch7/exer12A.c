#include <stdio.h>

//
// function takes variable length array and
// transpose it to new array that
// has rows and columns flipped
//
void TransposeMatrix(int rows, int columns,
				 int matrix_old[rows][columns], int matrix_new[columns][rows])
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			matrix_new[j][i] = matrix_old[i][j];
		}
	}
}
	
int main(void)
{

	int matrix_old[4][5] =
		{
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5}
		};
		
	int matrix_new[5][4];
	
	TransposeMatrix(4, 5, matrix_old, matrix_new);
	
	// print matrix_old
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%i ", matrix_old[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	t
	// print matrix_new
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%i ", matrix_new[i][j]);
		}
		printf("\n");
	}
}
