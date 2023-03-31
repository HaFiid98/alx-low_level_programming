#include"main.h"
/**
 * _strncat - function that concatenates 2 strings but n byts
 *
 * @dest : first strring
 * @src : second one
 * @n : n bytes
 *
 * return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int c,i;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = ' ';
	while (c < n)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	return (dest);
}

