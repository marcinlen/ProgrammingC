// generating fibonnaci numbers using
// variable length array

#include <stdio.h>

int main(void)
{
	int num_fibs;
	
	printf("Enter number of Fibonnaci numbers to print (between 1 and 75)?");
	scanf("%i", &num_fibs);
	
	if (num_fibs < 1 || num_fibs > 75)
	{
		printf("Can't print that!\n");
		return 1;
	}
	
	unsigned long long int fibonnaci[num_fibs];
	
	fibonnaci[0] = 0;
	fibonnaci[1] = 1;
	
	for (int i = 2; i < num_fibs; i++)
	{
		fibonnaci[i] = fibonnaci[i - 2] + fibonnaci[i - 1];
	}
	
	for (int i = 0; i < num_fibs; i++)
	{
		printf("%llu ",fibonnaci[i]);
	}
	
	printf("\n");
	
	return 0;
}
