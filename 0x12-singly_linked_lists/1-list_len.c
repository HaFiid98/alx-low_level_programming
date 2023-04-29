#include"lists.h"
/**
 * list_len - legth of linked list
 * @h: input
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
