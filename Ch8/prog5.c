/*
 * Program to update time by 1 second
 */
 
#include <stdio.h>

struct time
{
	int hour;
	int minutes;
	int seconds;
};

struct time TimeUpdate(struct time now);
struct time current_time, next_time;

int main(void)
{
	printf("Enter time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &current_time.hour, &current_time.minutes,
				    &current_time.seconds);
				    
	next_time = TimeUpdate(current_time);
	
	printf("Updated time is %.2i:%.2i:%.2i\n", next_time.hour,
		   next_time.minutes, next_time.seconds);
		   
	return 0;
}

/*
 * Function to update the time by 1 second
 */
struct time TimeUpdate(struct time now)
{
	now.seconds++;
	
	if (now.seconds == 60)
	{
		now.seconds = 0;
		now.minutes++;
		
		if (now.minutes == 60)
		{
			now.minutes = 0;
			now.hour++;
			
			if (now.hour == 24)
			{
				now.hour = 0;
			}
		}
	}
	
	return now;
}

