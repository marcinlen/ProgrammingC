// program for solving quadratic equations

#include <stdio.h>

//
// function declarations
//
double SquareRoot(double x), AbsoluteValue(double x);
       
void   ComputeX(double a, double b, double c);
//     
// global variables for two roots of quadratic equation
//
double x1, x2;

// main program

int main(void)
{
	double  a, b, c;
	
	printf("Program to calculate quadratic equation\n");
	printf("        ax^2 + bx + c = 0\n\n");
	printf("Enter value for a: ");
	scanf("%lf", &a);
	printf("Enter value for b: ");
	scanf("%lf", &b);
	printf("Enter value for c: ");
	scanf("%lf", &c);
	
	// when discriminant is less than zero
	// roots are imaginary numbers
	
	if ( (b * b - 4 * a * c) < 0 )
	{
		printf("The roots are imaginary numbers.\n");
	}
	else
	{
		ComputeX(a, b, c);
		printf("x1 = %f, x2 = %f\n", x1, x2);
	}
}

// funtion to compute root of a quadratic equation

void ComputeX(double a, double b, double c)
{
	x1 = (-b + SquareRoot(b * b - 4 * a * c)) / (2 * a);
	
	x2 = (-b - SquareRoot(b * b - 4 * a * c)) / (2 * a);
}

// function to compute absolute value of a number

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
