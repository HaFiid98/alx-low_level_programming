#include"variadic_functions.h"
/**
 * print_strings - print string
 * @n: number of strigns
 * @separator: sepr
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	unsigned int i;
	char *x;

	va_start(st, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(st, char *);
		if (x)
			printf("%s", x);
		else
			printf("(nil)");
		if ((i != n - 1) && separator)
			printf("%s", separator);
	}
	va_end(st);
	printf("\n");
}
