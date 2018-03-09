// function returns bit value based on
// condition number is prime

#include <stdio.h>

int is_prime(int num);

int main(void)
{
	int number;

	printf("enter number: ");
	scanf("%i", &number);
	
	printf("is prime returned %i\n", is_prime(number));
	
	return 0;
}



int is_prime(int num)
{
	int result = 0;
	
	if (num > 1)
	{
		for (int i = 2; i < num; i ++)
		{
			if (num % i == 0 && num != 2) 
			{
				// is not a prime
				return result;
			}
		}
		// is prime
		result = 1;
		return result;
	}
	// is not a prime
	return result; 
}
		
