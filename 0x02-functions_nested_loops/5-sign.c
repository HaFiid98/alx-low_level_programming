#include"main.h"
/**
 * _isalpha - A function that checks for alphabetic character.
 *
 * @c: is the character to  check
 *
 * Return: 1 if @c is alphabetic otherwise 0
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
