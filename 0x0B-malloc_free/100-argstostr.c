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
		int v, b, r = 0;
		int total_chars = 0;
		char *str;

		if (ac == 0 || av == NULL)
		return (NULL);
		for (v = 0; v < ac; v++)
		{
		for (b = 0; av[v][b]; b++)
		{
		total_chars++;
		}
		}
		str = malloc(sizeof(char) * (total_chars + ac + 1));
		if (str == NULL)
		return (NULL);
		for (v = 0; v < ac; v++)
		{
		for (b = 0; av[v][b]; b++)
		{
		str[r] = av[v][b];
		r++;
		}
		str[r] = '\n';
		r++;
		}
		str[r] = '\0';
		return (str);
}
