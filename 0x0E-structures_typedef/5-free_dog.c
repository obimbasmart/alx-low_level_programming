#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - functions that frees dog type from memory
 * @d: the dog to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}

