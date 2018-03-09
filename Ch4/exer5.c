/* reformating assignament */

#include <stdio.h>

int main(void)
{
	int n, power_of_2 = 1;
	
	printf("Table of powers of 2\n\n");
	printf("  n      2 to n power\n");
	printf("---------------------\n");
	
	for (n = 0; n <= 10; n++)
	{
		printf(" %2i       %i   \n", n, power_of_2);
		power_of_2 *= 2;
	}
	
	return 0;
}
