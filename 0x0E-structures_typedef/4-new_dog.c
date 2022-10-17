#include "dog.h"
#include <string.h>
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
	char *dup_name;
	char *dup_owner;

	dup_name = malloc(sizeof(*name) * strlen(name));
	dup_owner = malloc(sizeof(*owner) * strlen(owner));
	strcpy(dup_name, name);
	strcpy(dup_owner, owner);

	new_dog_ = malloc(sizeof(struct dog));
	if (new_dog_ == NULL)
	{
		return (NULL);
	}
	new_dog_->name = dup_name;
	new_dog_->age = age;
	new_dog_->owner = dup_owner;
	return (new_dog_);
}

