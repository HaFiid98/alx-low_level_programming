#include"main.h"
/**
 *  _strspn - gets the length of a prefix substring.
 *  @s : the string
 *  @accept : the accepted chars
 *
 *  Return: the number of chars in s from acc
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int c = 0;
	int j;

	while (s[i] && s[i] != ',')
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				c++;
			}

		j++;
	}
		i++;
	}
	return (c);
}
