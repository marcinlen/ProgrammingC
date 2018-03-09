/* 
 * invalid variable names: char, 6_05, A$
 *
 * valid variable names: Int, Calloc, floating, ReInitialize,
			Xx, _1312, _, alpha_beta_routine, z
 */

#include <stdio.h>

int main(void)


{
	int  A$ = 10;

	printf("variable = %i\n", A$);

	return 0;
}
