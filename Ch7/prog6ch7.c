// finding the greatest common divisor
// and returning the result

#include <stdio.h>

int GCD(int u, int v)
{
	int temp;
	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int main(void)
{
	int result;
	
	result = GCD(10, 15);
	printf("The greatest common divisor of 10 and 15 is %i\n", result);
	
	result = GCD(1026, 405);
	printf("The greatest common divisor of 1026 and 405 is %i\n", result);
	
	printf("The greatest common divisor of 83 and 240 is %i\n", GCD(83, 240));
	
	return 0;
}
	
	
