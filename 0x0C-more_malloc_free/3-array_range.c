#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create an array of integer
 * @min: Minimum value
 * @max: Maximum value
 * Return: The int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int x, y;
	int *b;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	b =  malloc(sizeof(int) * y);
	if (b == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
	{
		b[x] = min;
		min++;
	}
	return (b);
}
