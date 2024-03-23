#include "lists.h"

/**
 * add_dnodeint_end - add node at end of double linked list
 * @head: pointer to head
 * @n: integer
 * Return: number address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->next = NULL;
	new->n = n;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;

	return (new);
}
