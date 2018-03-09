/* Program to ilustriate a structure */

#include <stdio.h>

int main(void)
{
	struct date
	{
		int day;
		int month;
		int year;
	};
	
	struct date today;
	
	today.day   = 28;
	today.month = 7;
	today.year  = 2016;
	
	printf("Today's date is %i/%i/%.2i.\n", 
			today.day, today.month, today.year);
			
	return 0;
}
