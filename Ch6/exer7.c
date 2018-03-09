// sieve of erathosthenes algorithm

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n = 150;
	int p[200];
	int i;
		
	for (i = 2; i <= n; i++) p[i] = 0;
	
	
		  
	for (i = 2; i <= n; i++)
	{
		for (int j = i; j <= n / i; j++)
		{	
			p[i * j] = 1;
		}
	}
	
	for (i = 2; i <= n; i++)
	{
		if (p[i] == 0)	printf("%i ",i);
	}
	
	printf("\n");
	
	return 0;
}
		
	
	
