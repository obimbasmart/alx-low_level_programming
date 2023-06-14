#include "main.h"

/**
 * create_array - creates an array of chars, and initialize
 * @size: integer size of array
 * @c: char init
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	size_t idx;

	arr = malloc(sizeof(char) * size);
	if (!arr || size == 0)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		arr[idx] = c;

	return (arr);
}

