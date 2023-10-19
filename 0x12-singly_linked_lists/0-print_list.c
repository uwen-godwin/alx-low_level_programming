#include "lists.h"

/**
 * print_list - Display all the element of a list_t list
 * @h: First node in the list_t list
 * Returen: Value of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_count;

	nodes_count = 0;
	for (; h != NULL; h = h->next, nodes_count++)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (nodes_count);
}
