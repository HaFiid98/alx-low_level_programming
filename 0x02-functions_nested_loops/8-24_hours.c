#include"main.h"
/* jack_bauer - is a function that print every minute of the day
 *  * Description: The program prints all minute of the day
 *  Return:return 0
 *  */
void jack_bauer(void)
{
	int minute;
	int minutes;
	int hour;
	int hours;

	for (hour = 48 ; hour < 51 ; hour++)
	{
		for (hours = 48 ; hours < 52 ; hours++)
		{
			for (minute = 48 ; minute < 54 ; minute++)
			{
				for (minutes = 48 ; minutes <=57 ; minutes++)
				{
					_putchar(hour);
					_putchar(hours);
					_putchar(':');
					_putchar(minute);
					_putchar(minutes);
					_putchar('\n');
				}
			}
		}
	}
}
