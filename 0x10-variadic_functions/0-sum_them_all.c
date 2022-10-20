#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments to be passed
 *
 * Return: int : sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	long int sum;
	va_list params_list;

	va_start(params_list, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(params_list, int);
		i++;
	}
	return (sum);
}

