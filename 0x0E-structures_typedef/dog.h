#ifndef HEADER_F
#define HEADER_F

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
void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
#endif /* HEADER_H */
