#include "main.h"

/**
 * _abs - print the absolute value of a number
 * @a: functionn parameter
 * Return: -a or a
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
