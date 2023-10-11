#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - A function that prints each array elem on a newl
 * @array: An array
 * @size: Size of element to print
 * @action: A pointer to print in regular or hex
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
