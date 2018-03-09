// converting a positive integer 
// to another base

#include <stdio.h>

int main(void)
{
	const char base_digits[16] = {
		'0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
		
	int converted_number[64];		// array to store conversion
								// maximum 64 places for base-2 number
	long int number_to_convert;
	int next_digit, base, index = 0;
	
	// get the number and the base
	
	printf("enter number to convert:");
	scanf("%ld", &number_to_convert);
	printf("base to convert to: ");
	scanf("%i", &base);
	
	// convert to indicated base algorithm
	
	do
	{
		converted_number[index] = number_to_convert % base;
		number_to_convert /= base;
		index++;
	}
	while (number_to_convert != 0);
	
	// display results in reverse order
	// because algorithm is converting numbers from last digit to first
	
	printf("converted number = ");
	
	for (index -= 1; index >= 0; index--)	// init because do-while loop index++
	{
		next_digit = converted_number[index];
		printf("%c", base_digits[next_digit]);
	}
	
	printf("\n");
	
	return 0;
}
	
	
	
	
	
