// recursive calculation of factirials

#include <stdio.h>

int main(void)
{
	unsigned long int factorial(unsigned int n);
	
	for (unsigned int i = 0; i < 11; i++)
	{
		printf("%2u! = %lu\n", i, factorial(i));
	}
	
	return 0;
}

// recutsive function to calculate the factorial of a positive integer

unsigned long int factorial(unsigned int n)
{
	unsigned long int result;
	
	if (n == 0)
	{
		result = 1;
	}
	else
	{
		result = n * factorial(n - 1);
	}
	
	return result;
}
