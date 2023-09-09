#include <stdio.h>

/**
 * main - This program run
 * Return: Always 0
 */

int main(void)
{
	int n = 10;

	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is 0", n);
	else if (n < 0)
		printf("%d is negative", n);

	printf("\n");
	return (0);
}
