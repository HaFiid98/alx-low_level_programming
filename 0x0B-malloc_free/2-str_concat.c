#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - check the code for ALX School students.
 *
 * @s1: first
 * @s2: second
 *
 * Return: return poineter or Nill if faileer
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int l = 0;
	int b = 0;
	int k;
	int i, j;

	while (s1[l])
	{
		l++;
	}
	while (s2[b])
	{
		b++;
	}
	k = b + l + 1;
	c = malloc(sizeof(char) * k);
	if (c == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
	{
		s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = '\0';
	}
	if (s1)
	{
		for (i = 0; i < l; i++)
		{
			c[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < b; j++)
		{
			c[i] = s2[j];
			i++;
		}
	}
	c[i + 1] = '\0';
	return (c);
}
