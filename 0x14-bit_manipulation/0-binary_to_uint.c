#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if NULL or invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	char *s = (char *)b;
	int sum;

	sum  = 0;
	if (!b)
		return (0);

	while (*s != '\0')
	{
		if (*s != '0' && *s != '1')
			return (0);

		sum = (sum * 2) + (*s - '0');
		s++;
	}
	return (sum);
}
