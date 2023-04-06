#include "main.h"
/**
 * factorial - do a factorial
 *
 * @n : the number
 *
 * Return: 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
