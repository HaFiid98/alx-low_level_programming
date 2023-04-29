#include<stdlib.h>
#include"lists.h"
/**
 * free_list - free list_t
 * @head: input
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *k;

	while (head)
	{
		k = head->next;
		free(head->str);
		free(head);
		head = k;
	}
}
