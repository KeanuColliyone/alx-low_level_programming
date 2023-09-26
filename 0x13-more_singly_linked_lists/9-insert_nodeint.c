#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given positio.
 * @head: Pointer to the pointer to the head of the list.
 * @idx: The index where the new node should be inserted.
 * @n: The data (n) to be assigned to the new node.
 *
 * Return: The address of the new node, or NULL if it fails.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int num = 0;
	listint_t *new_node;
	listint_t *current_node = *head;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current_node != NULL)
	{
		if (num == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
			{
				return (NULL);
			}

			new_node->n = n;
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}

		num++;
		current_node = current_node->next;
	}

	return (NULL);
}

