#include "lists.h"

/**
 * list_len - determine the length of a list
 * @h: Node head
 * Return: Length of the node
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = (*h).next;
	}
	return (nodes);
}
