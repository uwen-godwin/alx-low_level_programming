#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: input parameter
 * @c: input parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] != '\0'; r++)
	{
		if (s[r] == c)
		return (&s[r]);
	}
	return (0);
}
