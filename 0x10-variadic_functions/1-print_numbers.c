#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: number seperator
 * @n: number of arguments passed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int id;

	va_start(args, n);
	if (!separator)
		separator = NULL;

	id = 0;

	while (id < n)
	{
		printf("%d", va_arg(args, int));

		/* if last number */
		if (n - id != 1)
			printf("%s", separator);

		id++;
	}
	printf("\n");
	va_end(args);
}


