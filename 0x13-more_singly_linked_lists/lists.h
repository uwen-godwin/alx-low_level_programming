#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Structure of a singly linked list
 * @n: list of integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif
