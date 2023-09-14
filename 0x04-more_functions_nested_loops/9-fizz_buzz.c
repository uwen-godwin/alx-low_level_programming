#include <stdio.h>

/**
 * main - print 1 to 100 and fibunacci
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FIZZBUZZ ");
		}
		else if (i % 3 == 0)
		{
			printf("FIZZ ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("BUZZ");
	printf("\n");
	return (0);
}
