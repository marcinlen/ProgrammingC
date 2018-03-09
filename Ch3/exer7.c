/* evaluate the expression and display result */

#include <stdio.h>

int main(void)
{
	float expression = (3.31 * 10e-8 * 2.01 *  10e-7) /
			     (7.16 * 10e-6 + 2.01 * 10e-8);

	printf("result is %g\n", expression);

	return 0;
}
