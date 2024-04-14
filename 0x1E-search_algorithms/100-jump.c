#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, or range where it's found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size);
    size_t prev = 0;
    size_t i; /* Declare variable here */

    if (!array)
        return (-1);

    printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

    while (array[prev] < value && prev < size)
    {
        prev += step;
        if (prev < size)
            printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        else
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

    /* Perform linear search within the range to find the value */
    for (i = prev - step; i < size && i <= prev; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    /* If the value is not found, return -1 */
    return (-1);
}
