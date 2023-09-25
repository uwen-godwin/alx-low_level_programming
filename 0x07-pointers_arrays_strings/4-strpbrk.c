#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input parameter
 * @accept: input parameter
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
		s++;
	}
	return ('\0');
}
