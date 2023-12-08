#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added. Index starts at 0.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
   	new_node->prev = NULL;
    	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
	}	
        *h = new_node;
	        return (new_node);

    }

    /* Traverse the list to the desired position */
    for (i = 0; i < idx - 1 && current != NULL; i++)
        current = current->next;

    /* Check if it is possible to insert at the given index */
    if (current == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Update the pointers to insert the new node */
    new_node->next = current->next;
    new_node->prev = current;
    if (current->next != NULL)
        current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
