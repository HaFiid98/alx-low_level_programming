#include"variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - pritn numbers
 * @separator: sepa
 * @n: number
 * Return: nnone
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	int x;

	va_start(pr, n);
		for (i = 0; i < n; i++)
		{
		x = va_arg(pr, int);
		if (separator != NULL)
		{
		printf("%d", x);
		if (!(i == n - 1))
			printf("%s", separator);
		}
		else
		{
			printf("%d", x);
		}
		}
		va_end(pr);	
	printf("\n");
}
