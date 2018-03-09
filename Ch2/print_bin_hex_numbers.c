/* Does exactly what it says on the tin.
 * You can assign binary and hexadecimal 
 * numbers to int. */

#include <stdio.h>

int main(void)
{
	int x = 42;

	printf("Decimal number %i is binary %#o and hexadecimal %#x.\n", x, x, x);
	// to print values for binary and hexadecimal without leading symbols use
	// %o for binary and %x for hexadecimal

	int binary = 014; // decimal 12
	printf("Binary %#o is decimal %i\n", binary, binary); 

	int rgb_color = 0xFFEF0D;
	printf("Color is %#X\n", rgb_color);
	// use capital X to print hex in capital letters	

	return 0;
}
