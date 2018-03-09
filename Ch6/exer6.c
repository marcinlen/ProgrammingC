// generate fibonnaci numbers
// without using arrays

#include <stdio.h>

int main(void)
{
	int fib, fib_minus_one = 0, fib_minus_two = 1;
	
	printf("%i\n%i\n", fib_minus_one, fib_minus_two);
	
	for (int i = 0; i < 10; i++)
	{
		fib = fib_minus_one + fib_minus_two;
		fib_minus_one = fib_minus_two;
		fib_minus_two = fib;
		printf("%i\n", fib);
	}
	
	return 0;
}
	
	
