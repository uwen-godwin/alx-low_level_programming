#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function to allocate memory for an array
 * @nmemb: Number of block of memory
 * @size: The size ofan int  element
 * Return: Retuen void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t j;

	if (nmemb  == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	 	return (NULL);
	for (j = 0; j < (nmemb * size); j++)
	{
		ptr[j] = 0;
	}
	return (ptr);
}
