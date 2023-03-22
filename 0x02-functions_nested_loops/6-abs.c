#include"main.h"
/**
 * _abs - A function that computes the absolute value of an integer.
 *
 * @n: is the number to compute
 *
 * Return: the absolue value of @n
 */
int _abs(int b)
{
	if (b > 0)
	{
		return (b);
	}
	else if (b < 0)
	{
	       	b = (b*-1);
	  return (b);
	}
	else
	{
		return (0);
	}
}
