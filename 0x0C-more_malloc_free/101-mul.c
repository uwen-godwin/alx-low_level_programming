#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - A function that checks if a string contains a non-digit char
 * @s: The string to be evaluated
 *
 * Return: 0, otherwise 1
 */

int is_digit(char *s)
{
	int m = 0;

	while (s[m])
	{
		if (s[m] < '0' || s[m] > '9')
			return (0);
		m++;
	}
	return (1);
}

/**
 * _strlen - The function returns the length of a string
 * @s: The string to evaluate
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, m, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (m = 0; m <= len1 + len2; m++)
		result[m] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (m = 0; m < len - 1; m++)
	{
		if (result[m])
			a = 1;
		if (a)
			_putchar(result[m] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
