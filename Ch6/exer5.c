// what the program does?

#include <stdio.h>

int main(void)
{
	int numbers[10] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			numbers[i] += numbers[j];
		}
	}
	
	for (int k = 0; k < 10; k++) printf("%i\n", numbers[k]);
	
	printf("\n");
	
	return 0;
}
