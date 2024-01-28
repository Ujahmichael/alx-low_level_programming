#include "lists.h"
/**
 * print_list - function that print all element of a singly linked list
 * @h: list pointer
 * Return: element of list
 */
size_t print_list(const list_t *h)
{
	int x = 0, a;
	char *b;

	while (h != NULL)
	{
		a = h->len;
		b = h->str;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", a, b);
		}
		h = h->next;
		x++;
	}
	return (x);
}
