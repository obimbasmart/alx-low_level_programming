#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of all its params
 * @n: the size of argument passed
 *
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int id;
	int total;

	va_start(args, n);
	id = total = 0;
	while (id < n)
	{
		total += va_arg(args, int);
		id++;
	}

	return (total);
}

