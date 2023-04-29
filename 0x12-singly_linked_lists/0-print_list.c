#include"lists.h"
#include <stdio.h>
/**
 * print_list - print list on linked list
 * @h: is the list
 * Return: return the nulber of nods
 */
size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		b++;
	}
	return (b);
}
