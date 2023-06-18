#include "main.h"

/**
 * free_grid - frees a 2-d array
 * @grid: pointer to array
 * @height: height of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int id;

	free(grid);

	for (id = 0; id < height; id++)
		free(grid[id]);

}
