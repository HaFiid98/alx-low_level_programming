#include"variadic_functions.h"
/**
 * print_numbers - pritn numbers
 * @separator: sepa
 * @n: number
 * Return: nnone
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i, x;

	va_start(pr, n);
	if (separator != 0)
	{
		for (i = 0; i < n; i++)
		{
		x = va_arg(pr, int);
		if (separator)
		{
		printf("%d", x);
		if (!(i == n - 1))
			printf(", ");
		}
		}
		va_end(pr);
	}
	printf("\n");
}
