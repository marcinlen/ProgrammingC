/* program to generate a table of prime numbers */

#include <stdio.h>

int main(void)
{
	int p, d;
	_Bool is_prime;
	
	for (p = 2; p <= 50; p++)
	{
		is_prime = 1;	// true (any positive number)
		
		for (d = 2; d < p; d++)
		{
			if (p % d == 0) is_prime = 0;
		}
		
		if (is_prime != 0) printf("%i  ", p);
	}
	
	printf("\n");
	
	return 0;
}
