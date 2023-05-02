#include "variadic_functions.h"
/**
 * print_all - prints anytihng
 * @format: for
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *s, *sp = "";
	va_list ls;

	va_start(ls, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
			case 'c':
				printf("%s%c", sp, va_arg(ls, int));
				break;
			case 'i':
				printf("%s%d", sp, va_arg(ls, int));
				break;
			case 'f':
				printf("%s%f", sp, va_arg(ls, double));
				break;
			case 's':
				s = va_arg(ls, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sp, s);
				break;
			default:
				a++;
				continue;
		}
			sp = ", ";
			a++;
		}
	}
		printf("\n");
		va_end(ls);
}


