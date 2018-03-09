/* evaluate polynomial */

#include <stdio.h>

int main(void)
{
	float x = 2.55;
	float result = 3 * (x * x * x) - 5 * (x * x) + 6;
	printf("polynomial 3x^3-5x^2+6 when x is 2.55 is %g\n", result);

	return 0;
}
