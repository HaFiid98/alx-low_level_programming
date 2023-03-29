#include"main.h"
/**
 * _strcpy - copies the string pointed to by @src
 * to the buffer pointed to by @dest
 *
 * @src: pointer to the strings to copy
 * @dest: pointer to the destination buffer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
			i++;
	}
	return (dest);
}
