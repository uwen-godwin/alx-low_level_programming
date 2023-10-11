#include <stdio.h>
#include <stdlib.h>

/**
 * main - Pogram that prints the opcodes of its own main function.
 * prints its own opcodes
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
	int bytes, y;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (y = 0; y < bytes; y++)
	{
		if (y == bytes - 1)
		{
			printf("%02hhx\n", arr[y]);
			break;
		}
		printf("%02hhx ", arr[y]);
	}
	return (0);
}
