#include"main.h"
/**
 * print-rev : pritn rev
 * @s : is tje string
 * return :nothing 
 */

void print_rev(char *s)
{
	int l;

	l = _strlen(s);
	while ( l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
