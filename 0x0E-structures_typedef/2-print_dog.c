#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n",
			d->name ? d->name : "(nil)",
			d->age,
			d->owner);
}


