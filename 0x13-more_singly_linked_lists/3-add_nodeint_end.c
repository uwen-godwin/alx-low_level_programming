#include "lists.h"

/**
 * add_nodeint_end - function to add a node to the end of a list
 * @head: Pointer pointing to the head of the list
 * @n: add data to the new list
 * Return: Return address of the element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *tmp;

	(void)tmp;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = nw;
	}
	return (*head);
}
