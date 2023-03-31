#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337
 *
 * @s : input
 *
 * Return: output
 */
char *leet(char *s)
{
	char b[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char u[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char n[] = {'4', '3', '0', '7', '1', '\0'};
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (b[j] && u[j])
		{
			if ((s[i] == b[j]) || (s[i] == u[j]))
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
