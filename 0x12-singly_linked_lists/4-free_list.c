#include<stdlib.h>
#include"lists.h"
/**
 * free_list - free list_t
 * @head: input
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *k = head;

	while (k->next)
	{
		free(k);
		k =  k->next;
	}
	k = head;
}
