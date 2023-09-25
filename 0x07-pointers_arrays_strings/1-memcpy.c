#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory area where the data will be copied
 * @src: source memory area from which data will be copied
 * @n: number of bytes to copy from src to dest
 * Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
