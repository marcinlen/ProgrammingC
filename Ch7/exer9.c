// function implementing calculation of
// least common multiple
// eg. lcm of 10 and 15 is 30

// includes
#include <stdio.h>

// declarations
int LCM(int u, int v), GCD(int u, int v);



int main(void)
{
	int result;
	
	result = LCM(10, 15);
	printf("The least common multiple of 10 and 15 is %i\n", result);
	
	result = LCM(4, 5);
	printf("The least common multiple of 4 and 5 is %i\n", result);
	
	printf("The least common multipleto of 22 and 37 is %i\n", LCM(22, 37));
	
	return 0;
}
  
  
  
int LCM(int u, int v)
{
	int result = 0;
	
	if (u >= 0 && v >= 0)
	{
		result = u * v / GCD(u, v);
	}
	
	return result;
}



int GCD(int u, int v)
{
	int temp;
	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}
