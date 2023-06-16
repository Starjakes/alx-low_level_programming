#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node pointer
 * @idx: is the index of the list where the new node should be added
 * @n: value in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int a = 0;
	dlistint_t *check = *h, *prev = *h, *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL || (check == NULL && idx > 0))
		return (NULL);
	/* set current ahead of previous */
	check = check->next;
	for (a = 1; a < idx; a++)
	{
		if (prev->next == NULL)
			return (NULL);
		check = check->next;
		prev = prev->next;
	}
	if (check == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = check;
	new->prev = prev;
	prev->next = new;
	check->prev = new;

	return (new);
}
