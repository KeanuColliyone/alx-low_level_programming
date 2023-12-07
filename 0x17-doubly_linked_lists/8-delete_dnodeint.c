#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list
 * @index: Index of the node that should be deleted (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (unsigned int i = 0; temp && i < index - 1; i++)
		temp = temp->next;

	if (!temp || !(temp->next))
		return (-1);

	dlistint_t *next = temp->next->next;

	free(temp->next);

	temp->next = next;

	if (next)
		next->prev = temp;

	return (1);
}
