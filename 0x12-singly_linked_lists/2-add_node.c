#include "lists.h"

/**
 * add_node - function to add node at the begining
 * @head: head of node
 * @str: string
 * Return: Return address of the element, or NULL if failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addnode;
	unsigned int j, count = 0;

	addnode = malloc(sizeof(list_t));
	if (addnode == NULL)
		return (NULL);
	addnode->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	addnode->len = count;
	addnode->next = *head;
	*head = addnode;

	return (*head);

}
