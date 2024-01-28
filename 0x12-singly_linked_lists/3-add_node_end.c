#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node at the end
 * @str: str
 * @head: head
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *nodee = *head;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (nodee->next)
		nodee = nodee->next;
	nodee->next = newnode;
	return (newnode);
}
