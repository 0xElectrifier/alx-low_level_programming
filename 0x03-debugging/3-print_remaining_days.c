#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @day: day of month
* Return: void
*/

void print_remaining_days(int day, int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				if (day >= 60)
					day++;
				else
					day = day;
			}
			else
				day = day;
		}
		else
		{
			if (day >= 60)
				day++;
			else
				day = day;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);

	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
	}
}

