#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - function that adds a new node to a list
 * @h: pointer to list head
 * @n: element of list
 * Return: new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	temp = *head;
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = temp;
		temp->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
