#include "lists.h"

/**
 * dlistint_len -returns the number of elements in a linked dlistint_t list.
 * @h:pointer to first node in linked dlistint_t list
 * Return:num of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int a = 0;

	for (a = 0; h; a++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
