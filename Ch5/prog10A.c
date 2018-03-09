/* program to generate a table of prime numbers
 * using bool from library	*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, d;
	bool is_prime;
	
	for (p = 2; p <= 1000; p++)
	{
		is_prime = true;	// true (any positive number)
		
		for (d = 2; d < p; d++)
		{
			if (p % d == 0) is_prime = false;
		}
		
		if (is_prime != false) printf("%3i ", p);
		
		if (p % 50 == 0) printf("\n"); // go to next line
	}
	
	printf("\n");
	
	return 0;
}
