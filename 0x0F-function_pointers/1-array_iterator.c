#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: array of ints
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t id;

	if (!action)
		return;

	id = 0;
	while (id < size)
	{
		action(array[id]);
		id++;
	}
}

