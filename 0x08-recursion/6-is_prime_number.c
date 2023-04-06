#include"main.h"
/**
 * pr - actual function
 *
 * @n : input
 * @i : the division
 *
 * Return: result
 */
int pr(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	if (((n % i) == 0) && ((i != 1) && (i != n)))
	{
		return (0);
	}
	if (((n % i) == 0) && ((i == 1) || (i == n)))
	{
		return (1);
	}
	return (pr(n, i + 1));
}
/**
 * is_prime_number - if prime or not
 *
 * @n : input
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (pr(n, 2));
}
