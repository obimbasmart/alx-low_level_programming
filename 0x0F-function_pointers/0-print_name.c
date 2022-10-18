#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: the function pointer to use to print
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/* if f is not NULL) */
	if (f != NULL)
	{

		/* pass @name to the function f() */
		f(name);
	}
}

