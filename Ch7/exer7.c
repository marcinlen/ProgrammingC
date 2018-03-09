#include <stdio.h>

//
// power function
//
long int x_to_the_n(int x, int n)
{
	long int result = x;
	
	// positive integer power
	if (n < 0) n = -n;
	
	if (n == 0)
	{
		return 1;
	}
	else
	{
		for (int i = 1; i < n; i++)
		{
			result *= x;
		}
	}
	
	return result;
}

// 
// main program
//
int main(void)
{
	long int x_to_the_n(int x, int n);
	
	int number, power;
	
	printf("enter number: ");
	scanf("%i", &number);
	printf("enter power: ");
	scanf("%i", &power);
	
	printf("%i to the power %i is %li\n", number, power, x_to_the_n(number, power));
	
	return 0;
}

		
	
	
