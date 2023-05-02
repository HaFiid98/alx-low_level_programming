#include"lists.h"
/**
 * free_listint - free list
 * @head: input
 */
void free_listint(listint_t *head)
{
	listint_t *r;

	while (head)
	{
		r = head;
		head = head->next;
		free(r);
	}
}
