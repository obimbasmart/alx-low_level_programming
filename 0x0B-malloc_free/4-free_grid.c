#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: width of array
 * @height: height of array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
    int h;
    h = 0;
    free(grid);
    while (h < height)
    {
        free(grid[h]);
        h++;
    }
}
