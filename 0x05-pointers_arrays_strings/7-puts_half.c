#include "main.h"

/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, half;

	half = 0;

	for (a = 0; str[a] != '\0'; a++)
		half++;
	n = (half / 2);
	if ((half % 2) == 1)
		n = ((half + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
