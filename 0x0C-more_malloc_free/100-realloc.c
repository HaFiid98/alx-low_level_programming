#include<stdlib.h>
#include"main.h"
/**
 * _realloc - realoc
 * @ptr : pt
 * @old_size: old
 * @new_size: new
 * Return: new
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *op;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && p)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	op = ptr;
	if (new_size < old size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = op[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = op[i];
	}
	free(ptr);
	return (p);
}
