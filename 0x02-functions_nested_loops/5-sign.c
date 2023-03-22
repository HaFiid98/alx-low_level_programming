#include"main.h"
 /**
 * print_sign - A function that prints the sign of a number.
 *
 * @n: is the number to print is sign
 *
 * Return: 1 if @n is positive, 0 if zero and -1 if negative
 */
{
if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if	(n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
