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
	int t = 1;

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
	if (*s1 == 0)
	{
		s1 = "";
		t = 0;
	}
	if (*s2 == 0)
	{
		s2 = "";
		t = 0;
	}
	if (t)
	{
	{
		for (i = 0; i < l; i++)
		{
			c[i] = s1[i];
		}
	}
	if (!(s2 == NULL))
	{
		for (j = 0; j < b; j++)
		{
			c[i] = s2[j];
			i++;
		}
	}
	c[i + 1] = '\0';
	}
	if (c == NULL)
	{
		return (0);
	}
	return (c);
}
