#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve (starting at 0).
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		if (num == index)
			return (current_node);

		num++;
		current_node = current_node->next;
	}

	return (NULL);
}

