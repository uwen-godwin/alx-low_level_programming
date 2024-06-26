#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */
