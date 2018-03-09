/* program for dividing two integers */

#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("Enter two integers: ");
	scanf("%i %i", &x, &y);
	
	if (y == 0)
	{
		printf("Cannot divide by zero.\n");
	}
	else
	{
		printf("Result: %.3f\n", (float)x / y);
	}
	
	return 0;
}
