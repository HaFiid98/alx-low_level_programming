#include "main.h"
/**
 * print_triangle - function that print triangle
 *
 * @size : the size of the tirangle
 *
 * Return: return nothing
 */
void print_triangle(int size)
{
	int i;
	int d;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size ; i++)
		{
			d = size;
			j = 0;
			while (j < (size - i))
			{
				_putchar(' ');
				j++;
			}
			while (d > (size - i))
			{
				_putchar('#');
				d--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
