// variable length arrays (and recursion)

#include <stdio.h>

int main(void)
{
	int recur(int n);
	
	int size;
	
	printf("enter size of the array:");
	scanf("%i", &size);
	
	int array[size];
	
	for (int i = 0; i < size; i++) 
	{
		array[i] = recur(i);
		printf("\n");
	}
	
	for (int j = 0; j < size; j++)
	{
		//printf("%i\n", array[j]);
	}
	
	return 0;
}

// recursive function

int recur(int n)
{
     int a = 1;
	
	if (n == 0) 
	{
		return a;
	}
	
	int in = recur(n - 1);
	
	printf("%i ", in);
	
	a += in;
	
	return a;
	 	
}
	
