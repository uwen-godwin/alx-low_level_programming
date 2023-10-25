#include "lists.h"

/**
 * pop_listint - The first node in the list to be deleted and return the data
 * @head: pointer to the list
 * Return: interger value
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
