#include"lists.h"
#include<stdlib.h>
#include<string.h>
/**
 * add_node_end - add new node to the end of list
 * @head: list_t
 * @str: content of string
 * Return: the adres of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;
	list_t *k = *head;

	while (str[l])
	{
		l++;
	}
	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->len = l;
	new->str = strdup(str);
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	while (k->next)
	{
		k = k->next;
	}
	k->next = new;
	return (*head);
}
