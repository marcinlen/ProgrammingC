// calculating the n-th triangular number

#include <stdio.h>

int CalculateTriangularNumber(int n)
{
	int triangular_number = 0;
	
	for (int i = 1; i <= n; i++)
	{
		triangular_number += i;
	}
	
	return triangular_number;
}

int main(void)
{
	
	printf("Triangular number %i is %i\n", 10 , CalculateTriangularNumber(10));
	printf("Triangular number %i is %i\n", 20 , CalculateTriangularNumber(20));
	printf("Triangular number %i is %i\n", 50 , CalculateTriangularNumber(50));
	
	return 0;
}
