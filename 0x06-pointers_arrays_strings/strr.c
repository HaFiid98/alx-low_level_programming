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
	char* a	= dest;
	int b;
	int c = 0;

	while (dest[c] != '\0')
	{
		c++;
	}

	for (i = 0;i < c;i++)
	{
		if (dest[i] == '\0')
		{
			a[i] = ' ';
		}
	}
}
		
