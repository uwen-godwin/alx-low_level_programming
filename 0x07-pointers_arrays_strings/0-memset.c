#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte.
 * @s: starting addres of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: Chanbe value with new array of n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		s[r] = b;
	}
	return (s);
}
