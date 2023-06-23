#include "main.h"

/**
 * _calloc - allocate memory for an array using malloc
 * @nmemb: number of elements of array
 * @size: of each block
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (size == 0 || nmemb == 0)
		return (NULL);
	array = malloc(nmemb * size);

	if (!array)
		return (NULL);

	memset(array, 0, nmemb * size);
	return (array);
}

