#include <stdio.h>

/**
 * main - prime factors of 1231952 are 2, 2, 2, 2, 37 and 208
 * Return: 0
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%ld\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}
