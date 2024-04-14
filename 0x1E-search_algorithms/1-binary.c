#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - prints the array being searched every time it changes
 * @array: pointer to the first element of the array to search in
 * @low: lowest value in array
 * @high: highest value in array
 * Return: Always EXIT_SUCCESS
 */

void print_array(int *array, size_t low, size_t high)
{
	char *delimiter = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (delimiter)
			printf("%s", delimiter);
		printf("%d", array[low]);
		delimiter = ", ";
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *			using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, middle, high = size - 1;

	if (array == NULL)
		return (-1);

	/* printing searched array at the beginning */
	print_array(array, low, high);

	while (low != high)
	{
		middle = (low + high) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	/* printing when subarray is searched */
		print_array(array, low, high);
	}
	/* in situations that have edge cases */
	if (array[low] == value)
		return (low);
	return (-1);
}
