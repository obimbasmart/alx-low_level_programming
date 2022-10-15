#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: old size of the old pointer
 * @new_size: new size to use for reallocation
 * Return: the pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
new_ptr = malloc(new_size);
free(ptr);
return (new_ptr);
}
if (new_size > old_size)
{
new_ptr = realloc(ptr, new_size);
free(ptr);
return 
}
free(ptr);
return (new_ptr);
}
