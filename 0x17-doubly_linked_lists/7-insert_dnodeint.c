#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the list where the new node should be added (starting at 0)
 * @n: Value to assign to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

    	if (idx == 0)
	{
		if (*h)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
		}
        	*h = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			if (temp->next != NULL)
			{
				new_node->next = temp->next;
				temp->next->prev = new_node;
			}
			temp->next = new_node;
			new_node->prev = temp;
			return (new_node);
		}
		temp = temp->next;
		count++;
	}

	free(new_node);
	return (NULL);
}
