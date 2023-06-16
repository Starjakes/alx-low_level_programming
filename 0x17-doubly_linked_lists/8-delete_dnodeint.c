#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a list.
 * @head: pointer to first node pointer.
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *check = *head, *prev = NULL;

	if (*head == NULL || check == NULL)
		return (-1);

	for (; i < index; i++)
	{
		if (check == NULL)
			return (-1);
		prev = check;
		check = check->next;
	}

	if (check == (*head))
	{
		*head = check->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		prev->next = check->next;
		if (check->next != NULL)
			check->next->prev = prev;
	}

	free(check);
	return (1);
}
