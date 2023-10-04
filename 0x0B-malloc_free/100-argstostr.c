#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: input parameter
 * @av: The double pointer array
 * Return: 0 (success)
 */

char *argstostr(int ac, char **av)
{
	int v, b, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
		for (b = 0; av[v][b]; b++)
			v++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (v = 0; v < ac; v++)
	{
	for (b = 0; av[v][b]; b++)
	{
		str[r] = av[v][b];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}
