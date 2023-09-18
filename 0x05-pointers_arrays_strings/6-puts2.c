#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int first = 0;
	int n = 0;
	char *y = str;
	int r;

	while (*y != '\0')
	{
		y++;
		first++;
	}
	n = first - 1;
	for (r = 0; r <= n; r++)
	{
		if (r % 2 == 0)
		{
			_putchar(str[r]);
		}
	}
	_putchar('\n');
}
