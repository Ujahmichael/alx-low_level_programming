#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all element of a list
 * @h: lists
 * Return: lists
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cur =0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cur++;
	}
	return (cur);
}
