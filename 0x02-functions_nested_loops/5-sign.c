#include"main.h"
/**
 * print-sign - A function that print the sign of a number
 *
 * @n: is the number whom check their sign
 *
 * Return: 1 if @n is greater than zero 
 * Return: 0 and prints 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int print_sign(int n)
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
