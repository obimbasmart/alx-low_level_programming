#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: number seperator
 * @n: number of arguments passed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int id;

	va_start(args, n);
	if (!separator)
		separator = "";

	id = 0;

	while (id < n)
	{
		printf("%s", va_arg(args, char *));

		/* if last number */
		if (n - id != 1)
			printf("%s", separator ? separator : "(nil)");

		id++;
	}
	printf("\n");
	va_end(args);
}


