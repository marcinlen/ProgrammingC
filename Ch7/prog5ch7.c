// function to find the greatest common divisor
// 	of two non-negative integers

#include <stdio.h>

void GCD(int u, int v)
{
	int temp;
	
	printf("The greatest common divisor of %4i and %4i is ", u, v);
	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	printf("%i\n", u);
}

int main(void)
{
	GCD(150, 35);
	GCD(1026, 405);
	GCD(83, 240);
	
	return 0;
}
