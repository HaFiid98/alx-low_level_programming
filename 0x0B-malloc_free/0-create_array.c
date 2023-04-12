#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars
 *
 * @size : size
 * @c : the char
 *
 * Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	char *b = malloc(size * sizeof(c));
	unsigned int i = 0;


	if (size == 0)
	{
		return (NULL);
	}
	if (b == NULL)
	{
		return (0);
	}
		while (i < size)
		{
			b[i] = c;
			i++;
		}
	return (b);
}
