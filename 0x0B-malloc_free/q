#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars
 *
 * @size : size
 * @char : the char
 *
 * Return: 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	char *b = malloc(size * sizeof(char*));
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (*b)
		{
			b[i+1] = c;
			i++;
		}
	}
	return (b);
}
