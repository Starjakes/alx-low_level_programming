#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all element in a list
 * @h: pointer in a list
 * Return:size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
