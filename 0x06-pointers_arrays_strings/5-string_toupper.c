#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @n: pointer to a string
 * Return: n
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
		}
		i++;
	}
	return (n);
}
