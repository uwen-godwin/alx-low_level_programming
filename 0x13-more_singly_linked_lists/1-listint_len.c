#include "lists.h"

/**
 * listint_len - lenght of an integer list
 * @h: pointer to the next node
 * Return: Number of element in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
