#include"main.h"
/**
 * print_last_digit - A function that print the last digit of a number.
 *
 * @a: is the number to compute
 *
 * Return: the last digit of numbe @a
 */
int print_last_digit(int a)
{
	int last;

	last = (a % 10);
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
