#include"main.h"
/**
 * _pow_recursion - return the value x raised to power of y
 *
 * @x : the number
 * @y : the power
 *
 * Return: the velue
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
