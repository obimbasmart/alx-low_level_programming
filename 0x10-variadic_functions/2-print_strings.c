#include <stdio.h>
#include <string.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: the string to be printed b/w strings
 * @n: the number strings to be passed to function
 *
 * Return: void - nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	/* declare variables */
	unsigned int i;
	va_list my_strings;
	char *next_string;

	va_start(my_strings, n);
	i = 0;

	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		next_string = va_arg(my_strings, char *);
		printf("%s", next_string == NULL ? "(nil)" : next_string);
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}

	va_end(my_strings);
	putchar('\n');
}
