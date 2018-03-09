/*
 * using linked lists
 */
 
#include <stdio.h>

int main(void)
{
	struct entry
	{
		int value;		// uninitialized int variable
		struct entry *next;	// uninitialized pointer variable
	};
	
	struct entry n1, n2, n3;
	int i1, i2;
	
	n1.value = 100;
	n2.value = 200;
	n3.value = 300;
	
	/*
	 * indirectly reference struct entry n2
	 * with a pointer next in struct entry n1
	 */
	n1.next = &n2;	
	
	/*
	 * assign address of struct entry n3
	 * to struct entry pointer next in n2
	 */		
	n2.next = &n3;		
	 
	 
	 	
	/*         
         * pointer to structure member reference	->
	 *            structure member reference	.
	 *       (indirection) pointer reference        *
         */
         
         
         
	i1 = n1.next->value;
	
	i2 = (*n2.next).value;
	
	printf("%i  ", i1);
	
	printf("%i\n", i2);
	
	return 0;
}
