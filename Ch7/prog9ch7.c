// function to find minimum value in an array

#include <stdio.h>

int minimum(int values[10])
{
	int min_value;
	
	min_value = values[0];
	
	for (int i = 0; i < 10; i++)
	{
		if (values[i] < min_value)
		{
			min_value = values[i];
		}
	}	
		return min_value;
}


int main(void)
{
	int minimum(int values[10]); // private function declaration
	
	int scores[10], min_score;
	
	printf("Enter 10 scores\n");
	
	for (int i = 0; i < 10; i++)
	{
		scanf("%i", &scores[i]);
	}
	
	min_score = minimum(scores); // sending array to function by name only
	
	printf("\nMinimum score is %i\n", min_score);
	
	return 0;
}
	
