/* print table of first 10 factorials */

#include <stdio.h>

int main(void)
{
	int factorial;
	
	printf("First 10 factorials\n");
	printf("-------------------\n");
	
	for (int i = 1; i <= 10; i++)
	{
		factorial = 1;
		
		for (int j = 1; j <= i; j++)
		{
			factorial *= j;
		}
		
		printf("  %2i! = %i       \n", i, factorial); 	
	}
	
	return 0;
}
