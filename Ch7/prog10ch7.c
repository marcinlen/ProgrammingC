// function to find minimum value in an array

#include <stdio.h>

int minimum(int values[], int number_of_elements)
{
	int min_value;
	
	min_value = values[0];
	
	for (int i = 0; i < number_of_elements; i++)
	{
		if (values[i] < min_value)
		{
			min_value = values[i];
		}
	}
		
	return min_value;	
}


int main(void)
{
	int minimum(int values[], int number_of_elements);

	int array1[5] = {157, -28, -37, 26, 10};
	int array2[7] = {12, 45, 1, 10, 5, 3, 22};
	
	printf("array1 minimum: %i\n", minimum(array1, 5));
	printf("array2 minimum: %i\n", minimum(array2, 7));
	
	return 0;
}
	
