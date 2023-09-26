#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;
	size_t num = 0;

	while (slow_ptr && fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		num++;

		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr->next, slow_ptr->next->n);
			exit(98);
		}
	}

	fast_ptr = head;
	while (fast_ptr != slow_ptr)
	{
		printf("[%p] %d\n", (void *)fast_ptr, fast_ptr->n);
		fast_ptr = fast_ptr->next;
		num++;
	}

	return (num);
}

