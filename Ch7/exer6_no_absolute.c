// calculating the square root of a number

#include <stdio.h>

// function to compute the square root of a number

double SquareRoot(double x)
{
	const double epsilon = .00001;
	double	  guess   = 1.0;
	
	int i = 0;
	
	printf("+++ %f\n", guess * guess - x);
	
	
	while ( !(guess * guess - x >= -epsilon) && !(guess * guess - x <= epsilon) && i < 10)
	{
		printf("=== %f\n", guess * guess - x);
		
		guess = (x / guess + guess) / 2.0;
		
		printf("=== %f\n", guess * guess - x);
		
		i++;
	}
	
	return guess;
}

int main(void)
{
	printf("SquareRoot (2.0) = %g\n", SquareRoot(2.0));
	printf("SquareRoot (144.0) = %f\n", SquareRoot(144.0));
	printf("SquareRoot (17.5) = %e\n", SquareRoot(17.5));
	
	return 0;
}
