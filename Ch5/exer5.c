// reverse the digits of a number using do-while loop 
// edit: proper negative number conversion

#include <stdio.h>

int main(void)
{
	int number, right_digit;
	_Bool negative_number = 0; // false
	
	printf("Enter number: ");
	scanf("%i", &number);
	
	if (number < 0) 
	{
		number = -number;
		negative_number = 1;  // true
	}
	
	do 
	{
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}
	while (number != 0);	  // remember ;
	
	if (negative_number) printf("-");
	
	printf("\n");
	
	return 0;
}
