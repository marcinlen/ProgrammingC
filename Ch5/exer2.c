/* program takes 2 integers, determines is first
 * is evenly divisible by the second		*/
 
#include <stdio.h>

int main(void)
{
	int x, y;
	
	printf("Enter two integers: ");
	scanf("%i %i", &x, &y);
	
	if ( x % y == 0 && (x < 0 && y < 0 || x > 0 && y > 0) ) 
	{
		printf("Integers are equal.\n");
	}
	else 
	{
		printf("Integers are not equal.\n");
	}
	
	return 0;
}
