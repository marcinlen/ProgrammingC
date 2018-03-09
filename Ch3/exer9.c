/* program finds next largest even multiple
 * for given values i and j
 */

#include <stdio.h>

int main(void)
{
	int i = 996;
	int j = 4;
	
	int next_multiple = i + j - i % j;

	printf("Next largest even multiple of %i after number %i is %i.\n", 
			j, i, next_multiple);

	return 0;
}
