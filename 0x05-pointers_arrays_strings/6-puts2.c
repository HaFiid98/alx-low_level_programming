#include"main.h"
#include<stdio.h>
/**
 * puts2 - printf every other char
 *
 * @str : is the string we put
 *
 * return : does not return
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0 || (i == 0))
		{
			_putchar(str[i]);
		}
	i++;
	}
	putchar('\n');
}
