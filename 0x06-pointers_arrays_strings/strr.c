#include"main.h"
/**
 * _strcat -  function that concatenates two strings.
 *
 * @dest : first string
 * @src : secund string
 * return: dest
 */
char *_strcat(char *dest, char *src)
{
	int r;
	int c = 0;
	int i = 0;

	while (dest[c] != '\0')
	{
		c++;
	}
	dest[c] = ' ';
	r = c;
	while (src[i])
	{
		dest[r] = src[i];
		r++;
		i++;
	}
	dest[r] = '\0';
	return (dest);
}
