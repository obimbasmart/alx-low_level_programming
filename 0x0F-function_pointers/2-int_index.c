#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int id;

	if (!cmp || !array || size <= 0)
		return (-1);

	id = 0;
	while (id < size)
	{
		if (cmp(array[id]))
				return (id);

		id++;
	}
	return (-1);
}

