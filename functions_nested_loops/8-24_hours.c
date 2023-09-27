#include "main.h"
/**
 * jack_bauer - print every minute of the day for jack bauer
 * hour: hour to read
 * minute: minute to read
 *
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for ((minute = 0; minute < 50; minute++))
		{
			_putchar("%.2d:%.2d\n", hour, minute);
		}
	}
}
