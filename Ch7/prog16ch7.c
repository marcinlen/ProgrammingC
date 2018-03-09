// illustrating static and automatic variables

#include <stdio.h>

void auto_static(void)
{
	  auto int auto_var = 1;	  // automaticly created and destroyed on function call
	static int static_var = 1;
	
	printf("automatic = %i, static = %i\n", auto_var, static_var);
	
	auto_var++;
	static_var++;
}

int main(void)
{
	void auto_static(void);
	
	for (int i = 0; i < 5; i++)	auto_static();
	
	return 0;
}
