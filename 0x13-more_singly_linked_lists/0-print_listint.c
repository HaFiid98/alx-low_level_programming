#include"lists.h"
#include<stddef.h>
/**
 * print_listint - pritn all elements
 * @h: input
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
