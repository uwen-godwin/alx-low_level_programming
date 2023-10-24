#include "lists.h"

/**
 * print_listint - Integer data in a singly linked list
 * @h: Head pointing to the next node in the list
 * Return: Numbers of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
