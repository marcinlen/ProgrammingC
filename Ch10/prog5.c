/*
 * using structures containing pointers
 */
 
#include <stdio.h>

int main(void)
{
	struct int_ptrs
	{
		int *px;
		int *py;
	};
	
	struct int_ptrs pointers;
	int x = 100;
	int y;
	
	
	// int b = 5;
	// int *a = &b;
	
	pointers.px = &x;
	pointers.py = &y;
	*pointers.py = 50;
	
	// pointers.py = a;
	
	printf("x = %i, *pointers.px = %i\n", x, *pointers.px);
	printf("y = %i, *pointers.py = %i\n", y, *pointers.py);
	
	// printf("b = %i\n", *a);
	
	return 0;
}
