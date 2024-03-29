#ifndef HEADER_F
#define HEADER_F

/* builtins */
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * struct dog - a typical dog with attributes
 * @name: name of dog
 * @age: how old the dog is
 * @owner: who owns the dog
 *
 * Description: This is a simple blueprint that represents a dog
 * with its specifica attributes unique to it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* HEADER_H */
