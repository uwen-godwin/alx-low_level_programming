#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Program to get ends of input and add together for size
 * @s1: Input 1 to concat
 * @s2: Input 2 to concat
 * Return: return concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, mv;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = mv = 0;
	while (s1[m] != '\0')
		m++;
	while (s2[mv] != '\0')
		mv++;
	conct = malloc(sizeof(char) * (m + mv + 1));

	if (conct == NULL)
		return (NULL);
	m = mv = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}

	while (s2[mv] != '\0')
	{
		conct[m] = s2[mv];
		m++, mv++;
	}
	conct[m] = '\0';
	return (conct);
}
