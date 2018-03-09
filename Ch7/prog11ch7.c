// changing array elements in functions

#include <stdio.h>


int main(void)
{
	void multiply_by_2(float array[], int x); // name distinct from function header
	
	float float_values[4] = {1.2f, -3.7f, 6.2f, 8.55f};
	
	multiply_by_2(float_values, 4);
	
	for (int i = 0; i < 4; i++)
	{
		printf("%7.2f", float_values[i]);
	}
	printf("\n");
	
	return 0;
}

void multiply_by_2(float a[], int n)
{
	for (int i = 0; i < n; i++)	a[i] *= 2;
}

