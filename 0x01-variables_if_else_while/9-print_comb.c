#include <stdio.h>

/**
 * main - Write a program that prints all single-digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int j;
	int numbers[] = [0, 1, 2, 3, 4. 5. 6, 7, 8, 9];

	for (j = 0; j < 10; j++)
	{
		putchar('0' + numbers[j]);
	}
	putchar('\n');
	return (0);
}
