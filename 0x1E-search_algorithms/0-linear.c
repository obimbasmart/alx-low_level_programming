#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
