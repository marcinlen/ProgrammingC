// program to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{
	int n, triangular_number;

	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf(" n    Sum of 1 to n\n");
	printf("---   -------------\n");

	triangular_number = 0;

	for (n = 1; n <= 10; ++n) 
	{
		triangular_number += n;
		printf("%-2i           %i\n", n, triangular_number);
	}

	return 0;
}
