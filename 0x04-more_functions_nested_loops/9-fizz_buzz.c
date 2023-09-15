#include <stdio.h>

/**
 * main - print 1 to 100 and fizzbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}

