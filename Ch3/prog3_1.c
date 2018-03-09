/* Standard _Bool 
 * %f display floating value
 * %e display scientific notation
 * %g choose between %f and %e
*/

#include <stdio.h>

int main(void)
{
	int	integer_var = 100;
	float	floating_var = 331.79;
	double	double_var = 8.44e+11;
	char	char_var = 'W';

	_Bool	bool_var = 0;

	printf("integer variable = %i\n", integer_var);
	printf("floating variable = %f\n", floating_var);
	printf("double variable = %e\n", double_var);
	printf("double variable = %g\n", double_var);
	printf("char variable = %c\n", char_var);

	printf("bool variable = %i\n", bool_var);


	return 0;
}  
