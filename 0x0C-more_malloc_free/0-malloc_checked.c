#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - A function to allocates memory using malloc
 * @b: The number of bytes to allocate
 * Return: Return pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
