#include "lists.h"

/**
 * add_nodeint - function to add a node to a list
 * @head: head pointer
 * @n: number of data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	if (head == NULL)
		return (NULL);

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (0);
	if (*head == NULL)
		nw_node->next = NULL;
	else
		nw_node->next = *head;
	nw_node->n = n;
	*head = nw_node;

	return (*head);
}
