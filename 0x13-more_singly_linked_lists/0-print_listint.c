#include "lists.h"

/**
 * print_listint - print all element in a list
 * @h: pointer in a list
 * Return:size of the list
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
