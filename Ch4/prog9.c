/* reverse the digits of a number using do-while loop */

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	
	printf("Enter number: ");
	scanf("%i", &number);
	
	do 
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
	while (number != 0);	// remember ;
	
	printf("\n");
	
	return 0;
}
