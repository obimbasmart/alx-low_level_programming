#include <stdlib.h>
#include <string.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum number : start
 * @max: maximum number : end
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
int *arr_ptr, i;
if (min > max)
{
return (NULL);
}
arr_ptr = malloc((max - min + 1) * sizeof(int));
if (arr_ptr == NULL)
{
return (NULL);
}
i = 0;
while (min <= max)
{
arr_ptr[i] = min;
min++;
}
return (arr_ptr);
}
