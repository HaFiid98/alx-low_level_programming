#include"main.h"
#include"stdio.h"
/**
 * print_to_98 - prints number up to 98 starting from n
 *
 * @n : the integer we starting with
 *
 * Return: Does not return anything
 */
void print_to_98(int n)
{
	int i;

if (n <= 98)
{
	for (i = n ; i <= 98 ; i++)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
else
{
	for (i = n ; i >= 98 ; i--)
	{
		printf("%d", i);
		if (i != 98)
		{
			printf(", ");
		}
	}
}
putchar('\n');
}
