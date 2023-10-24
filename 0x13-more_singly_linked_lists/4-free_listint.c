#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: head pointing to the first node in the list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
	}
}
