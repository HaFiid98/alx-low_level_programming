#include"main.h"
/**
 * _strlen - function legnth
 *
 * @s : is the string
 *
 * return : nothing
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
