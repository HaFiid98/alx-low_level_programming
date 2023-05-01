#include"lists.h"
/**
 * add_nodeint - add new node at the beginning
 * @head: the node
 * @n: integer
 * Return: the adrress
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *k;

	k = malloc(sizeof(listint_t));
	if (k == NULL)
	{
		return (NULL);
	}
	k->n = n;
	k->next = *head;
	*head = k;
	return (*head);
}
