#include "lists.h"

/**
 * find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	/* determine if loop exists by seeing if t and h meets */
	/* start them at head, move t one node and h two nodes */
	t = h = head;

	while (t != NULL && h)
	{
		t = t->next;
		h = h->next->next;

		if (t == h)
		{
			/* start t at head and h at address they met */
			/* move t and h one node to find loop origin */
			t = head;
			while (t != h)
			{
				t = t->next;
				h = h->next;
			}
			return (t);
		}
	}

	return (NULL);
}
