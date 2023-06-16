#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: pointer to first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head != NULL)
	{
		check = head;
		head = head->next;
		free(check);
	}
}
