#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: how old is the dog ?
 * @owner: who onws the good dog ?
 * Return: a new type dog_t: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog_;

	new_dog_ = malloc(sizeof(struct dog));
	if (new_dog_ == NULL)
	{
		return (NULL);
	}
	new_dog_->name = name;
	new_dog_->age = age;
	new_dog_->owner = owner;
	return (new_dog_);
}

