// program that translates number into
// german language words

#include <stdio.h>

int main(void)
{
	int number, digit, mod = 1;
	
	printf("Enter number: ");
	scanf("%i", &number);
	
	do
	{
		mod = 1;				  // reset mod from prior loop division run
		digit = number;
		while (digit > 9)		  // extract left-most digit from number
		{
			digit = digit / 10;   // easy error when: digit = number / 10
			mod *= 10;
		}
		number %= mod;			  // take remainder based on how large number is
		
		switch (digit)
		{
			case 0:
				printf("null ");
				break;
			case 1:
				printf("eins ");
				break;
			case 2:
				printf("zwei ");
				break;
			case 3:
				printf("Drei ");
				break;
			case 4:
				printf("Vier ");
				break;
			case 5:
				printf("Funf ");
				break;
			case 6:
				printf("sechs ");
				break;
			case 7:
				printf("sieben ");
				break;
			case 8:
				printf("acht ");
				break;
			case 9:
				printf("neun ");
				break;
			default:
				printf("error");
				break;
		} 
		
	}
	while (mod != 1);			 // if mod == 1 then loop extracting digits was
							 // not executed meaning number had 1 digit only
	
	printf("\n");
	
	return 0;
}
		
