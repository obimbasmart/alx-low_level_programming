#include "dog.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dog - prints a struct dog
 * @d: the dog to print
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf(d->name == NULL ? "Name: (nil)\n" : "Name: %s\n", d->name);
		printf(d->age == 0.0 ? "Age: (nil)\n" : "Age: %.6f\n", d->age);
		printf(d->owner == NULL ? "Owner: (nil)\n" : "Owner: %s\n", d->owner);
	}
}

