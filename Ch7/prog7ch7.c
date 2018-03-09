// function to calculate the absolute value

#include <stdio.h>

float AbsoluteValue(float x)
{
	if (x < 0) x = -x;
	
	return x;
}

int main(void)
{
	float f1 = -15.5, f2 = 20.0, f3 = -5.0;
	int   i1 = -716;
	float result;
	
	result = AbsoluteValue(f1);
	printf("result = %.2f\n",result);
	printf("f1 = %.2f\n", f1);
	
	result = AbsoluteValue(f2) + AbsoluteValue(f3);
	printf("result = %.2f\n", result);
	
	result = AbsoluteValue( (float) i1);
	printf("result = %.2f\n", result);
	
	result = AbsoluteValue(i1);
	printf("result = %.2f\n", result);
	
	printf("%.2f\n", AbsoluteValue(-6.0) / 4);
	
	return 0;
}
