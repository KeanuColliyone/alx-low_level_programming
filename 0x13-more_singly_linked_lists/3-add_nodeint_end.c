#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *added_node;
	listint_t *sub;

	added_node = malloc(sizeof(listint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		*head = added_node;
	}
	else
	{
		sub = *head;
		while (sub->next != NULL)
		{
			sub = sub->next;
		}
		sub->next = added_node;
	}
	return (added_node);
}

