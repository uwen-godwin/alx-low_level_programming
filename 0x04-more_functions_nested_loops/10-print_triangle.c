#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: the size of a triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	else if (j < size - (i + 1))
	{
		_putchar(' ');
	}
	else
	{
		_putchar('#');
	}
	}
	_putchar('\n');
	}
	}
	else
	}
		_putchar('\n');
	}
}
