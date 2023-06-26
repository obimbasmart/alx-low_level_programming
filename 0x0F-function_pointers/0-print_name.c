#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string - name to print
 * @f: pointer to function used for printing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	/* call function */
	f(name);
}

