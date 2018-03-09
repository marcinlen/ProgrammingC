// calculating the square root of a number

#include <stdio.h>


// funtion to calculate absolute value of a number

double AbsoluteValue(double x)
{
	if (x < 0) x = -x;
	
	return x;
}


// function to compute the square root of a number

double SquareRoot(double x)
{
	const double epsilon = .00001;
	double	  guess   = 1.0;
	
	while ( AbsoluteValue(guess * guess - x) >= epsilon )
	{
		guess = (x / guess + guess) / 2.0;
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
