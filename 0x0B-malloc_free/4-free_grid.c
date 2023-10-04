#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A program to frees 2d array
 * @grid: The 2d grid
 * @height: The height dimension of grid
 * Description: The frees memory of grid
 * Return: return nothing after execution
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
	{
		free(grid[z]);
	}
	free(grid);
}
