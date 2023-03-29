#include "main.h"
#include<stdio.h>
/**
 * _puts - print a string
 *
 * @str : is the string
 *
 * return : nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
