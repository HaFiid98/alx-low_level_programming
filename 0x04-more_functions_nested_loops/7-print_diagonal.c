#include"main.h"
/**
 * print_line - A function who diagonal lines n times
 *
 * @n: number of times to print line
 *
 * Return: Does not return anything
 */
void print_diagonal(int n)
{
	int i,j;

	if (n > 0)
	{
		for (i = 0; i < n ;i++)
		{
			if (i >= 1)
			{
				for (j = 0; j < i; j++)
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else 
	{
	       	_putchar('\n');
	}
}
