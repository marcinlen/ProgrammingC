/* calculate the sum of digits in an integer
 * ex. 2155 is 2 + 1 + 5 + 5 + 13 */
 
#include <stdio.h>

int main(void)
{
	int sum = 0, number;
	
	printf("Program to calculate sum of digits in integer\n\n");
	printf("Enter number: ");
	scanf("%i", &number);
	
	while (number != 0)
	{
		sum += number % 10;
		number /= 10;
	}
	
	printf("Sum of digits is %i.\n", sum);
	
	return 0;
}
	
