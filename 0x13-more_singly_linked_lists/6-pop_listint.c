#include"lists.h"
/**
 * pop_listint - delete the head of the node
 * @head: input
 * Return: the data
 */
int pop_listint(listint_t **head)
{
	listint_t *r;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	r = (*head)->next;
	free(*head);
	*head = r;
	return (data);
}
