#include "dog.h"
#include <stddef.h>
/**
 * init_dog - constructor to initialize a type: dog
 * @d: the dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 */
void init_dog(struct dog *d, char *name,
		float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
