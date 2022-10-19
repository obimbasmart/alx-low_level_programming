#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: the array to search from
 * @size: the size of the array
 * @cmp: the function to use for search
 *
 * Return: int : index of first occurrence
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	/* loop thru the array element-wise */
	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			/* pass each element into the function pointer */
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
