#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print numbers, followed by a new line
 * @separator: the string to be printed b/w numbers
 * @n: the number of integers to be passed to function
 *
 * Return: void - nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* declare variables */
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	i = 0;

	if (separator == NULL)
	{
		separator = "";
	}
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}

	va_end(numbers);
	putchar('\n');
}
