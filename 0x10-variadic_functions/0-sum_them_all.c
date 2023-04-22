#include "variadic_functions.h"
/**
 * sum_them_all - sum all numbers
 * @n: first one
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s;
	va_list sm;

	s = 0;
	va_start(sm, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(sm, int);
	}
	va_end(sm);
	return (s);
}
