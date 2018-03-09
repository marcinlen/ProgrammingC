/*
 * Illustriating Pointers
 */
 
#include <stdio.h>

int main(void)
{
	int x;
	int count = 10;
	int *int_pointer;
	
	
	int_pointer = &count;
	x = *int_pointer;
	
	
	/*
		x = &count;   
		
		this doesn't work 
		
		&count is an address in memory
		
	 */
	
	printf("count = %i, x = %i\n", count, x);
	
	return 0;
}
