#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t prev, i, step = 0;

	if (!array)
		return (-1);

	while (array[min(step, size - 1)] < value && step < size)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);

		if (prev >= size - 1)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	for (i = prev; i <= min(step, size - 1); i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
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
