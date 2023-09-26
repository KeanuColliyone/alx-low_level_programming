#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to the pointer to the head of the list.
 *
 * Return: The data (n) of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *sub;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	sub = *head;
	data = sub->n;
	*head = sub->next;

	free(sub);

	return (data);
}

