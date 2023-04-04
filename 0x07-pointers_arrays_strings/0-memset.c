#include"main.h"
/**
 * _memset - fill memory with constant byte
 *
 * @s : the var to fill
 * @b : fill with
 * @n : stop here
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
