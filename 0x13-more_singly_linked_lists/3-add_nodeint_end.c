#include"lists.h"
/**
 * add_nodeint_end - add node ath the end
 * @head: input
 * @n: integer
 * Return: listint
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l;
	listint_t *k = *head;

	l = malloc(sizeof(listint_t));
	if (l == NULL)
		return (NULL);
	l->n = n;
	l->next = NULL;
	if (*head == NULL)
	{
		*head = l;
		return (l);
	}
	while (k->next != NULL)
		k = k->next;
	k->next = l;
	return (l);
}
