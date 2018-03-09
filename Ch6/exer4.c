// program calculates average of 
// ten foating-point values

#include <stdio.h>

int main(void)
{
	float num, sum = 0.0, float_array[10];
	
	printf("Enter 10 real numbers to get average.\n");
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &num);
		sum += num;
	}
	
	printf("Average: %f\n", sum / 10);
	
	return 0;
}
	
	
