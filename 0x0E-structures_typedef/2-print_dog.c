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
		printf(d == NULL ? "Name: (nil)\n" : "Name: %s\n", d->name);
		printf(d == NULL ? "Age: (nil)\n" : "Age: %.6f\n", d->age);
		printf(d == NULL ? "Owner: (nil)\n" : "Owner: %s\n", d->owner);
	}
}

