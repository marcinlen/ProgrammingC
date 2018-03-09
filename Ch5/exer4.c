/* program that acts as a simple printing calculator */

#include <stdio.h>

int main(void)
{
	float number, accumulator;
	char operator;
	
	printf("Enter number and S to set accumulator.\n"); 
	
	do
	{
		scanf("%f %c", &number, &operator);
		accumulator = number;	
	}
	while (operator != 'S');
	
	printf("Follow by number and operator to calculate.\n");
	printf("End program by entering 0 and E.\n");
	
	
	
	while (operator != 'E')
	{
		scanf("%f %c", &number, &operator);
		
		if (operator == 'S') 
		{
			accumulator = number;
		}
		else	if (operator == '+')
	     {
	     	accumulator = accumulator + number;
			printf("%.2f\n", accumulator);
		}
		else if (operator == '-')
		{
			accumulator = accumulator - number;
			printf("%.2f\n", accumulator);
		}
		else if (operator == '*')
		{
			accumulator = accumulator * number;
			printf("%.2f\n", accumulator);
		}
		else if (operator == '/')
		{
			if (number == 0)
			{
				printf("Division by zero.\n");
			}
			else 
			{
				accumulator = accumulator / number;
				printf("%.2f\n", accumulator);
			}
		}
		else
		{
			printf("Unknown operator.\n");
		}
	}
				
	return 0;
}
