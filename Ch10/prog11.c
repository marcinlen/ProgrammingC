#include <stdio.h>



int ArraySum(int *array, const int n)
{
	int sum = 0;
	int * const array_end = array + n;
	
	for ( ; array < array_end; array++)
	{
		sum += *array;
	}
	
	return sum;
}



int main(void)
{
	int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };
	
	int sum_of_values = ArraySum(values, 10);
	
	printf("The sum is %i\n", sum_of_values);
	
	return 0;
}
