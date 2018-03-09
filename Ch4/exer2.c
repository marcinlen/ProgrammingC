/* table of squares of integers */

#include <stdio.h>

int main(void)
{
	int n, n_square;
	
	printf(" n  n square\n");
	printf("---|---------\n");
	
	for (n = 1; n <= 10; n++)
	{
		n_square = n * n;
		printf("%2i     %3i    \n", n, n_square);
	}
	
	return 0;
}   
