#include"main.h"
/**
 * print_line - A function  that draws a straight line in the terminal.
 *
 * @n : the legnth of the sraight line
 *
 * Return: Does not return anything
 */
void print_line(int n)
{
	int i;
	if ( n < 0 )
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ;i++ )
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
