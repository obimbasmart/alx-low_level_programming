#include "dog.h"

/**
 * free_dog - free struct dog type from memory
 * @d: pointer to struct dog
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
