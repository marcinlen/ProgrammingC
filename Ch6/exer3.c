// demonstrating an array of counters

#include <stdio.h>

int main(void)
{
	int response, rating_counters[1000];
	
	for (int i = 0; i <= 1000; i++) rating_counters[i] = 0;
	
	printf("Enter responses\nEnter 999 to exit\n");
	
	for (int i = 1; i <= 1000; i++) 
	{
		scanf("%i", &response);
		
		if (response == 999) break;
	
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
	
	for (int i = 1; i <= 10; i++) printf("%4i%14i\n", i, rating_counters[i]);
	
	return 0;
}
	
