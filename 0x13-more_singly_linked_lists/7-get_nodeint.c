#include"lists.h"
/**
 * get_nodeint_at_index - return the nth node of listint
 * @head: list
 * @index: start ay 0
 * Return: return the nth
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int i;
	unsigned int j = 0;

	while (t)
	{
		t = t->next;
		j++;
	}
	if (index > j)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
