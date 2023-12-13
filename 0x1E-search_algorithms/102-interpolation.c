#include "search_algos.h"

/**
 * interpolation_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t high, pos, low = 0;

	if (!array)
		return (-1);

	high = size - 1;
	while (low <= high)
	{
		pos = low + (((double)(high - low) /
				(array[high] - array[low])) *
				(value - array[low]));

		if (pos >= size)
			break;

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;

	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
