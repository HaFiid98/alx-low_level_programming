#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - check the code for ALX School students.
 *
 * @str: input
 *
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *c;
	unsigned int i,b = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
	{
		b++;
	}
	c = malloc(sizeof(char) * (b + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0;i < b;i++)
	{
		c[i] = str[i];
	}
	return (c);
}
