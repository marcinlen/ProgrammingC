// calculating the n-th triangular number

#include <stdio.h>

void CalculateTriangularNumber(int n)
{
	int triangular_number = 0;
	
	for (int i = 1; i <= n; i++)
	{
		triangular_number += i;
	}
	
	printf("Triangular number %i is %i\n", n , triangular_number);
}

int main(void)
{
	CalculateTriangularNumber(10);
	CalculateTriangularNumber(20);
	CalculateTriangularNumber(50);
	
	return 0;
}
