/* using nested 'for' loops */

#include <stdio.h>

int main(void)
{
	int n, number, triangular_number, counter;
	
	//for (counter = 1; counter <= 5; ++counter)
	
	counter = 1;
	while (counter <= 5)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &number);
		
		triangular_number = 0;
		
		//for (n = 1; n <= number; ++n)
		
		n = 1;
		while (n <= number)
		{
			triangular_number += n;
			n++;
		}
		
		printf("Triangular number %i is %i\n\n", number, triangular_number);
		
		counter++;
	}
	
	return 0;
}
