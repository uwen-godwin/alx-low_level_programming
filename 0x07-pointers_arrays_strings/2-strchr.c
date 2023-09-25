#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: input parameter
 * @c: input parameter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
		int i;

		for (i = 0; s[i] != '\0'; s++)
		{
		if (*s == c)
		{
		return (&s[i]);
		}
		}
		return (0);
}
