/* asking the user for input */

#include <stdio.h>

int main(void)
{
	int n, number, triangular_number;
	
	printf("What triangular number do you want? ");
	scanf("%i", &number);
	
	triangular_number = 0;
	
	//for (n = 0; n <= number; n++)
	
	
	n = 0;
	while (n <= number)
	{
		triangular_number += n;
		++n; 	
	}
	
	printf("Triangular number %i is %i\n", number, triangular_number);
	
	return 0;
}
