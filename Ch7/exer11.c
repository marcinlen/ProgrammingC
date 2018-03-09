#include <stdio.h>

// declarations
void ArraySum(void);

// globals
int array[] = {1, 2, 3}, array_size = 3;
int sum;
  
int main(void)
{
	ArraySum();
	printf("sum of elements = %i\n", sum);
}

/*
 * function uses global variables 
 * calculates sum of elements in integer array
 */
void ArraySum(void)
{
	for (int i = 0; i < array_size; i++)
	{
		sum += array[i];
	}
}






						
