#include "lists.h"

/**
 * print_listint - print all element in a list
 * @h: pointer in a list
 * Return:the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
