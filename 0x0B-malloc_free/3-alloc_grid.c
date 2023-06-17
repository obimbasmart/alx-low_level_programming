#include "main.h"

/**
 * alloc_grid - return pointer to 2-d array
 * @width: int: array width
 * @height: int: array height
 * Return: pointer to pointer to integers
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);

		/* if malloc fails, free everthing already malloc'd */
		if (!arr[i])
		{
			free(arr);
			while (i >= 0)
			{
				free(arr[i];
				i--;
			}
			return (NULL);
		}
	}

	/* initialize array to zero */
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
