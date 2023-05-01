#include"lists.h"
/**
 * free_listint - free listint
 * @head: input
 * Return: npne
 */
void free_listint(listint_t *head)
{
	listint_t *k;

	while (head)
	{
		k = head;
		head = head->next;
		free(k);
	}
}
