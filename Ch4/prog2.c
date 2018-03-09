/* calculate 200th triangulat number
   using for statement */

#include <stdio.h>

int main(void)
{
	int n, triangular_number;

	triangular_number = 0;

	//for (n = 1; n <=200; n = n + 1)
	
	n = 1;
	while (n <= 200)
	{ 
		triangular_number = triangular_number + n;
		n = n + 1;
	}

	printf("The 200th triangular number is %i\n", triangular_number);

	return 0;
}
