#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);


void print_array(int *array, size_t lower_b, size_t upper_b);
#endif /* SEARCH_ALGOS */
