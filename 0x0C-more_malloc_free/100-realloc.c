#include "main.h"

/**
 * _realloc - reallocate memory block using malloc
 * @ptr: old pointer
 * @old_size: initial size
 * @new_size: new size for reallocation
 * Return: pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int id;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	if (new_size > old_size)
		new_ptr = malloc(new_size);

	for (id = 0; id < old_size; id++)
		((char *)new_ptr)[id] = ((char *)ptr)[id];

	free(ptr);
	return (new_ptr);
}

