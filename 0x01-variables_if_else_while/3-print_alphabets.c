#include <stdio.h>

/**
 * main -  Write a program that prints the alphabet
 *
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'Z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
