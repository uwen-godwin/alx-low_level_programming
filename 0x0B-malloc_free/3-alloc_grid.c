#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A program that uses nested loop to make grid
 * @width: input parameter
 * @height:Input parameter
 * Return: return pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mee;
	int a, g;

	if (width <= 0 || height <= 0)
		return (NULL);
	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mee[a] = malloc(sizeof(int) * width);
		if (mee[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mee[a]);
			free(mee);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (g = 0; g < width; g++)
			mee[a][g] = 0;
	}
	return (mee);
}
