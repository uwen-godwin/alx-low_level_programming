#include "lists.h"

/**
 * get_nodeint_at_index - Node at the index
 * @head: head pointin g to the first element in the list
 * @index: desired position to retrieve node
 * Return: pointer to the retrieve node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; k < index; k++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
