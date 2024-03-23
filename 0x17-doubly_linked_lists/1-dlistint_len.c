#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - function that count and return number of element in a list
 * @h: pointer to list
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
