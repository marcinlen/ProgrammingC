#include <stdio.h>

// globals
int	matrix_old[4][5] =
		{
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5},
			{1, 2, 3, 4, 5}
		};
int matrix_new[5][4];


// converting arrays
void TransposeMatrix(void)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			matrix_new[j][i] = matrix_old[i][j];
		}
	}
}

// main function	
int main(void)
{
	TransposeMatrix();
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%i ", matrix_new[i][j]);
		}
		printf("\n");
	}
}
