#include "search_algos.h"

/**
 * exponential_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	i = 1;
	while (i < size && value >= array[i])
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			i / 2, min(i, size - 1));
	return (binary_search_exp(array, i / 2, min(size, i - 1), value));
}


/**
 * binary_search_exp - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @low: lower bound of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int binary_search_exp(int *array, size_t low, size_t size, int value)
{
	size_t upper_bound, mid_index, lower_bound = low;

	upper_bound = size;
	while (lower_bound <= upper_bound)
	{
		print_array(array, lower_bound, upper_bound);
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
 * @low: index to start print
 * @high: index to stop print
 *
 * Return: nothing
 */
void print_array(int *array, size_t low, size_t high)
{

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		printf("%d", array[low]);
		if (low < high)
			printf(", ");
	}
	printf("\n");
}

/**
 * min - get the minimum integer of two nums
 * @a: first integer
 * @b: second integer
 *
 * Return: integer
 */
size_t min(int a, int b)
{
	return ((a > b) ? b : a);
}

