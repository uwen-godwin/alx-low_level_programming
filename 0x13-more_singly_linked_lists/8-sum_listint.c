#include "lists.h"

/**
 * sum_listint - The sum of all the data of a list
 * @head: the pointer to the list
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
