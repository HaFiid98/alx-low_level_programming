#include"lists.h"
/**
 * free_listint2 - free list
 * @head: input
 */
void free_listint2(listint_t **head)
{
	listint_t *r;
	while (*head)
	{
		r = *head;
		*head = (*head)->next;
		free(r);
	}
	*head = NULL;
}
