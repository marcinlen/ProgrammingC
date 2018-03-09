// working with inefficiencies of prog10A

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, d;
	bool is_prime;
	
	
	p = 2;
	printf("%3i ", p); 		         // 2 is first prime number
	
	for (p = 3; p <= 1000; p += 2)    // ignore all numbers divisible by 2
	{
		is_prime = true;	         // true (any positive number)
		
		for (d = 2; d < p && is_prime == true; d++)
		{
			if (p % d == 0) is_prime = false;
		}
		
		if (is_prime != false) printf("%3i ", p);
	}
	
	printf("\n");
	
	return 0;
}
