#include"main.h"
/**
 * _strcpy - this function copy string to another string
 *
 * @dest : we copy to
 *
 * @src : we copy from
 *
 * return : dest
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
