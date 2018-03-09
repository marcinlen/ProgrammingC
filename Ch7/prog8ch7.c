// calculating the square root of a number

#include <stdio.h>


// funtion to calculate absolute value of a number

float AbsoluteValue(float x)
{
	if (x < 0) x = -x;
	
	return x;
}


// function to compute the square root of a number

float SquareRoot(float x)
{
	const float epsilon = .00001;
	float	  guess   = 1.0;
	
	while ( AbsoluteValue(guess * guess - x) >= epsilon )
	{
		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
}

int main(void)
{
	printf("SquareRoot (2.0) = %f\n", SquareRoot(2.0));
	printf("SquareRoot (144.0) = %f\n", SquareRoot(144.0));
	printf("SquareRoot (17.5) = %f\n", SquareRoot(17.5));
	
	return 0;
}
