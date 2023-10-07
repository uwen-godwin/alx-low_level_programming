#include <unistd.h>

/**
 * _putchar -A program to writes the character c to stdout
 * @c: Character to print
 *
 * Return: 1 On success.
 * On error,should returned -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
