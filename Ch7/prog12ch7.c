// sorting an array of integers in ascending order

#include <stdio.h>

void sort(int a[], int n)
{
	int temp;
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if ( a[i] > a[j] )
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}


int main(void)
{
	void sort(int a[], int n);
	
	int array[16] = {34, -5, 6, 0, 12, 100, 56, 22,
				  44, -3, -9, 12, 17, 22, 6, 11};
				  
	printf("Array before the sort:\n");
	
	for (int i = 0; i < 16; i++)	printf("%i ", array[i]);
	
	sort(array, 16);
	
	printf("\nArray after the sort:\n");
	
	for (int i = 0; i < 16; i++)	printf("%i ", array[i]);
	
	printf("\n");
	
	return 0;
}
