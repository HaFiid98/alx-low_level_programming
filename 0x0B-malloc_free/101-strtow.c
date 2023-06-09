#include"main.h"
#include <stdlib.h>
/**
 * wc - count
 * @s: wr
 * Return: wc
 */
int wc(char *s);
int wc(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;
	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 * strtow - splits a string
 * @str: st
 * Return: yes
 */
char **strtow(char *str)
{
	char **m, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (str[len])
		len++;
	words = wc(str);
	if (words == 0)
		return (NULL);
	m = (char **)malloc(sizeof(char *) * (words + 1));
		if (m == NULL)
			return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
			end = i;
			tmp = (char *) malloc(sizeof(char) * (c + 1));
			if (tmp == NULL)
				return (NULL);
			while (start < end)
				*tmp++ = str[start++];
			*tmp = '\0';
			m[k] = tmp - c;
			k++;
			c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	m[k] = NULL;
	return (m);
}
