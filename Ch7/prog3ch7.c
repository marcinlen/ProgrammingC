// more on calling functions

#include <stdio.h>

void PrintMessage(void)
{
	printf("I love water.\n");
}

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		PrintMessage();
	}
	
	return 0;
}
