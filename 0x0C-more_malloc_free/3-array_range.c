#include "main.h"

/**
 * array_range - create an array of integers
 * @min: mininmum integer start
 * @max: maximum integer stop
 * Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *array, id;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));

	if (!array)
		return (NULL);

	id = 0;
	while (min <= max)
	{
		array[id] = min;
		min++;
		id++;
	}
	return (array);
}
