#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

int binary_search_exp(int *array, size_t low, size_t size, int value);
void print_array(int *array, size_t lower_b, size_t upper_b);
size_t min(int, int);
#endif /* SEARCH_ALGOS */
