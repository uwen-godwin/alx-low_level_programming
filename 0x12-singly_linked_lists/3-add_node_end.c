#include "lists.h"

/**
 * add_node_end - Function to add node at the end of a list
 * @head: Node head
 * @str: string
 * Return: new element address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *addnode, *tmp;
	unsigned int k, count = 0;

	addnode = malloc(sizeof(list_t));
	if (addnode == NULL)
		return (NULL);
	addnode->str = strdup(str);
	for (k = 0; str[k] != '\0'; k++)
		count++;
	addnode->len = count;
	addnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = addnode;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = addnode;
	}
	return (*head);
}
