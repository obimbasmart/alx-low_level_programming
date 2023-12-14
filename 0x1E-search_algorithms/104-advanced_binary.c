#include "search_algos.h"

/**
 * advanced_binary - search for value in an array
 * @array: array of integers
 * @size: size of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t high, mid, low = 0;

	if (!array)
		return (-1);

	high = size - 1;
	mid = low + (high - low) / 2;
	print_array(array, low, high);

	if (array[mid] == value)
		return (array[mid] == array[mid - 1] ? mid - 1 : mid);

	if (mid == 0 || mid == size - 1)
		return (-1);

	if (array[mid] > value)
		return (_advanced_binary(array, low, mid - 1, value));
	return (_advanced_binary(array, mid + 1, high, value));
}

/**
 * _advanced_binary - search for value in an array
 * @array: array of integers
 * @high: size of array
 * @low: lower bound of array
 * @value: value to search
 *
 * Return: int - index of value if found
 */
int _advanced_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;

	print_array(array, low, high);
	if (array[mid] == value)
		return (array[mid] == array[mid - 1] ? mid - 1 : mid);

	if (mid == 0 || mid == high)
		return (-1);
	if (array[mid] > value)
		return (_advanced_binary(array, low, mid  - 1, value));
	return (_advanced_binary(array, mid + 1, high, value));
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
