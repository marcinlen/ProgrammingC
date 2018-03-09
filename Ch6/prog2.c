// demonstrating an array of counters

#include <stdio.h>

int main(void)
{
	int rating_counters[11], i, response;
	
	for (i = 0; i <= 10; i++) rating_counters[i] = 0;
	
	printf("Enter responses\n");
	
	for (i = 1; i <= 20; i++) 
	{
		scanf("%i", &response);
	
		if (response < 1 || response > 10)
		{
			printf("Bad response: %i\n", response);
		}
		else
		{
			rating_counters[response]++;
		}
	}
	
	printf("\n\nRating   Number of responses\n");
	printf("------ -------------------\n");
	
	for (i = 1; i <= 10; i++) printf("%4i%14i\n", i, rating_counters[i]);
	
	return 0;
}
		
		
