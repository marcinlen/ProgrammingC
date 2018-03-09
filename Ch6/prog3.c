// generating fibonnaci numbers

#include <stdio.h>

int main(void)
{
	int fibonnaci[15];
	
	fibonnaci[0] = 0;
	fibonnaci[1] = 1;
	
	for (int i = 2; i < 15; i++)
	{
		fibonnaci[i] = fibonnaci[i - 2] + fibonnaci[i - 1];
	}
	
	for (int i = 0; i < 15; i++)
	{
		printf("%i\n", fibonnaci[i]);
	}
	
	return 0;
}
	
