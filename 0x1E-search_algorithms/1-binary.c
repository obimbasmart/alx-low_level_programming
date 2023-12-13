#include "search_algos.h"

/**
 * binary_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int binary_search(int *array, size_t size, int value)
{
	int NOT_FOUND = 1;
	size_t upper_bound, lower_bound, mid_index = 0;

	upper_bound = size - 1;
	while (NOT_FOUND)
	{
		print_array(array, lower_bound, upper_bound);

		if (lower_bound == upper_bound)
			break;
		mid_index = lower_bound + (upper_bound - lower_bound) / 2;
		if (array[mid_index] == value)
			return (mid_index);

		if (array[mid_index] > value)
			upper_bound = mid_index - 1;
		else
			lower_bound = mid_index + 1;

	}
	return (-1);
}

/**
 * print_array - print an array of integers
 * @array: array of integers
 * @lower_b: index to start print
 * @upper_b: index to stop print
 *
 * Return: nothing
 */
void print_array(int *array, size_t lower_b, size_t upper_b)
{

	printf("Searching in array: ");
	for (; lower_b <= upper_b; lower_b++)
	{
		if (lower_b == upper_b)
		{
			printf("%d\n", array[lower_b]);
			return;
		}
		printf("%d, ", array[lower_b]);
	}
}
