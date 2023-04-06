#include"main.h"
/**
 * sqr - founding nat sq
 * @i : the number
 * @n : input
 * Return: reszult
 */
int sqr(int n, int i);
int sqr(int n, int i)
{
	if ((i * i) == n)
	{
		return (i);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	return (sqr(n, i + 1));
}
/**
 * _sqrt_recursion - eturns the natural square root of a number.
 *
 * @n : input
 *
 * Return: eturns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqr(n, 0));
}
