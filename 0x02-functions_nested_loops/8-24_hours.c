#include"main.h"
/**
 * jack_bauer - A function who prints every minute of the day
 * from 00:00 to 23:59
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void jack_bauer(void)
{
        int minute;
        int minutes;
        int hour;
	int hours;
	int compt = 57;
        for (hour = 48 ; hour < 51 ; hour++)
        {
                if (hour == 50)
		{ 
			compt = 51;
		}	
                        for (hours = 48 ; hours <= compt ; hours++)
                        {
                        for (minute = 48 ; minute < 54 ; minute++)
                                {
                                for (minutes = 48 ; minutes <= 57 ; minutes++)
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
