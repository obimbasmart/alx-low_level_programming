#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that execustes a function
 * given as parameter on each element of an array
 * @array: the array of elements
 * @size: the size of the array
 * @action: pointer to the function to use
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	/* check if function pointer is NULL */
	if (action == NULL)
	{
		return;
	}

	/* loop thru the array and call the function on each parameter*/
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

