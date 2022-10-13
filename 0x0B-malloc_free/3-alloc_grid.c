#include <stdlib.h>
/**
 * str_concat -  function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: pointer;
 */
int **alloc_grid(int width, int height)
{
int **arr, w, h;
if (width <= 0 || height <= 0)
{
return (NULL);
}
arr =  malloc(sizeof(int **) * height);
if (arr == NULL)
{
return (NULL);
}
h = 0;
while (h < height)
{
arr[h] = malloc(width * sizeof(int *));
if (arr[h] == NULL)
{
free(arr);
return (NULL);
}
h++;
}
h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
arr[h][w] = 0;
w++;
}
h++;
}
return (arr);
}
