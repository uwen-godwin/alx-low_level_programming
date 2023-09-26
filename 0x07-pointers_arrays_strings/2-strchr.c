#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: input parameter
 * @c: input parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	for (; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
