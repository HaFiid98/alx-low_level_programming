#include"main.h"
/**
 * _memcpy - that copies memory area.
 *
 * @dest : copy to
 * @src : copy from
 * @n : number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
