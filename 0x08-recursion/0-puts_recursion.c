#include"main.h"
/**
 *  _puts_recursion - print a string
 *
 *  @s : input
 *
 *  Return: none
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_puts_recursion(s);
	_putchar('\n');
}
