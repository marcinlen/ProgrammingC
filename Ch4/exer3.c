/* print table of triangular numbers
 * - use formula: n (n + 1) / 2
 * - print every fifth number between 5 and 50
 */
 
#include <stdio.h>

int main(void)
{
	int n, triangular_number;
	
	printf("Table of triangulars\n");
	printf("--------------------\n");
	printf("number   triangular\n");
	printf("--------------------\n");
	
	for (n = 5; n <= 55; n += 5)
	{
		triangular_number = n * (n + 1) / 2;
		printf("  %2i        %i     \n", n, triangular_number);
	}
	
	return 0;
}
