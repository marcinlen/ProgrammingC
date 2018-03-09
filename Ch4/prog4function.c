// with added function

#include <stdio.h>

int main(void)
{
	int calculate_triangular_number(int n);
	
	int num, counter;
	
	//for (counter = 1; counter <= 5; ++counter)
	
	counter = 1;
	while (counter <= 5)
	{
		printf("What triangular number do you want? ");
		scanf("%i", &num);
		
		printf("Triangular number %i is %i\n\n", num, calculate_triangular_number(num));
		
		counter++;
	}
	
	return 0;
}

int calculate_triangular_number(int number)
{
	int triangular_number = 0;
		
	//for (n = 1; n <= number; ++n)
	
	int n = 1;
	while (n <= number)
	{
		triangular_number += n;
		n++;
	}
	
	return triangular_number;
}
	
