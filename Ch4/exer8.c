/* using nested 'for' loops */

#include <stdio.h>

int main(void)
{
	int n, number, triangular_number;
	printf("Enter 0 to exit\n");
	
	do
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		
		triangular_number = 0;
		
		for (n = 1; n <= number; ++n)
		{
			triangular_number += n;
		}
		
		printf("Triangular number %i is %i\n\n", number, triangular_number);
	}
	while (number != 0);
	
	return 0;
}
