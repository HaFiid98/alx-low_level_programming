#include"main.h"
/**
 * more_numbers - A function who print the numbers, from 0 to 14 X10
 *
 * Description - Does not receive any parameters
 *
 * Return: Does not return anything
 */
void more_numbers(void)
{
	int i;
	int c;
	int b,x,t;

for (t = 48; t <= 57; t++)
{
	b = 48;
	x = 0;
	c = 57;
	while (x < 2)
	{
	for (i = 48; i <= c; i++)
	{
		if (b == 49)
		{ 
			_putchar(49);
		}
		if (i == 57)
		{
			c = 52;
			b = 49;
		}
		_putchar(i);
		
	}
		x++;
}
		_putchar('\n');
}
}
