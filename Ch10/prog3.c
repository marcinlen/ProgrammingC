/*
 * Using pointers in expressions
 */
 
#include <stdio.h>

int main(void)
{
	int x, y;
	int *px, *py;
	
	x = 5;
	px = &x;
	y = *px / 2 + 10;	// *pa - points to pointee
	py = px;			//  pa - points to pointer
	
	printf("x = %i, y = %i, *px = %i, *py = %i\n", x, y, *px, *py);
	printf("px = %p, *px = %i\n", px, *px);
	
	return 0;
}
	
	
	
	
