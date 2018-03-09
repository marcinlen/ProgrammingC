// function returns bit value based on
// condition number is prime

#include <stdio.h>

int number, prime;

void is_prime(void);

int main(void)
{
	printf("enter number: ");
	scanf("%i", &number);
	
	is_prime();
	printf("is prime returned %i\n", prime);
	
	return 0;
}



void is_prime(void)
{
	if (number > 1)
	{
		for (int i = 2; i < number; i ++)
		{
			if (number % i == 0 && number != 2) 
			{
				// is not a prime
				prime = 0;
				return;
			}
		}
		// is prime
		prime = 1;
	}
	else
	{
		// is not a prime
		prime = 0; 
	}
}
		
