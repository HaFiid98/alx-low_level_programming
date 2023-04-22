#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sum all numbers
 * @n: first one
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int s, c, i;
	va_list sm;

	s = 0;
	if (n == 0)
		return (0);
	va_start(sm, n);
	c = va_arg(sm, int);
	for (i = 0; i < n; i++)
	{
		s = s + c;
		c = va_arg(sm, int);
	}
	va_end(sm);
	return (s);
}
