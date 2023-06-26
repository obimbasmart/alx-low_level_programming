#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (!new_dog)
		return (NULL);

	new_dog->name = malloc(sizeof(char) * (strlen(name) + 1));
	new_dog->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (!(new_dog->name) || !(new_dog->owner))
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	return (new_dog);
}



