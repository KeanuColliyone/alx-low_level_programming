#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the pointer to the head of the list.
 * @index: The index of the node to delete (starting at 0).
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *current_node;
	listint_t *sub;

	if (head == NULL || *head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	while (current_node != NULL)
	{
		if (num == index - 1)
		{
			if (current_node->next == NULL)
				return (-1);

			sub = current_node->next;
			current_node->next = sub->next;
			free(sub);
			return (1);
		}

		num++;
		current_node = current_node->next;
	}

	return (-1);
}

