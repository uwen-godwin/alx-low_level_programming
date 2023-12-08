#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added (starting at 0).
 * @n: Value to be stored in the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL && i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = (current == NULL) ? NULL : current->next;
	new_node->prev = current;
	if (current != NULL)
		current->next = new_node;
	if (new_node->next != NULL)
		new_node->next->prev = new_node;
	return (new_node);
}
