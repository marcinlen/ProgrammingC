/*
 * Using pointers to structures
 */
 
#include <stdio.h>

int main(void)
{
	struct date
	{
		int day;
		char* month;
		int year;
	};
	
	struct date today;
	struct date *today_ptr;
	
	today_ptr = &today;
	
	(*today_ptr).day = 4;
	(*today_ptr).month = "Sep";
	(*today_ptr).year = 2016;
	
	printf("Today's date is %i %s %i\n", 
		   today_ptr->day, today_ptr->month, today_ptr->year);
		   
	return 0;
}
