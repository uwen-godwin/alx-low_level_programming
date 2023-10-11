#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - A  function that print name using pointer to function
 * @name: The string to add
 * @f: The pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
