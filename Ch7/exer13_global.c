/*
 * sorting an array of integers
 * using variable size arrays
 * using global variables instead of passing arguments
 */

#include <stdio.h>

// globals
int low_to_high;
int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
				  44, -3, -9, 12, 17, 22, 6, 11};

/*
 * sort array of integers
 * - from low to high
 * - from high to low
 */
void sort(void)
{
	int temp;
	
	for (int i = 0; i < 16 - 1; i++)
	{
		for (int j = i + 1; j < 16; j++)
		{
			if ( array[i] > array[j] && low_to_high == 1)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
			
			if ( array[i] < array[j] && low_to_high == 0)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}	
		}
	}
}


int main(void)
{			  
	printf("Array before the sort:\n");
	for (int i = 0; i < 16; i++)	printf("%i ", array[i]);
	
	// ascending sort
	low_to_high = 1;
	sort();
	printf("\nArray after the ascending sort:\n");
	for (int i = 0; i < 16; i++)	printf("%i ", array[i]);
	printf("\n");
	
	// descending sort
	low_to_high = 0;
	sort();
	printf("\nArray after the descending sort:\n");
	for (int i = 0; i < 16; i++)	printf("%i ", array[i]);
	printf("\n");
	
	return 0;
}
