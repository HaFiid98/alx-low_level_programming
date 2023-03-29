#include"main.h"
/**
 * puts_half - Write a function that prints half of
 * a string, followed by a new line.
 *
 * @str : is the var
 *
 * return : nothing
 */
void puts_half(char *str)
{
	int b;
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if ((len % 2) == 0)
	{	b = (len / 2);
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
	else
	{
		b = ((len - 1) / 2);
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			b++;
		}
	}
	_putchar('\n');
}
