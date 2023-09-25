#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *x = needle;

		while (*i == *x && *x != '\0')
		{
			i++;
			x++;
		}
		if (*x == '\0')
			return (haystack);
	}
	return (0);
}
