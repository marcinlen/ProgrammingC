// program to determine tomorrow's date (revised)

#include <stdio.h>
#include <stdbool.h>

struct date
{
	int day;
	int month;
	int year;
};

int NumberOfDays(struct date d);
bool isLeapYear(struct date d);

int main(void)
{
	struct date today, tomorrow;
	
	printf("Enter today's date (dd mm yyyy): ");
	scanf("%i%i%i", &today.day, &today.month, &today.year);
	
	if ( today.day != NumberOfDays(today) )
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12)
	{
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is %i/%i/%.2i.\n",
			tomorrow.day, tomorrow.month, tomorrow.year % 100);
			
	return 0;
}	

// function to find number of days in a month

int NumberOfDays(struct date d)
{
	int days;
	const int days_per_month[12] =
		{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		
	if (isLeapYear(d) == true && d.month == 2)
	{
		days = 29;
	}
	else
	{
		days = days_per_month[d.month - 1];
	}
	
	return days;
}

// function to determine a leap year

bool isLeapYear(struct date d)
{
	bool leap_year_flag;
	
	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	{
		leap_year_flag = true;
	}
	else
	{
		leap_year_flag = false;
	}
	
	return leap_year_flag;
}
	
