#include "lists.h"
/**
 * list_len - func that return num of element of a list
 * @h: pointer
 * Return: num
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
