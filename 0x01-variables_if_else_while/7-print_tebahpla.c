#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 *
 * Return: Alway 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
