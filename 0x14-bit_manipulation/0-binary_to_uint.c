#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: string of 0 and 1 chars
 *
 * Return: converted number or 0 if NULL or invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, len, idx;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	num = idx = 0;

	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		num += (b[len] - '0') * power(2, idx);
		idx++;
	}
	return (num);
}

/**
 * power - get the power of a number raised by exp
 * @exp: the exponent
 * @base: the base number
 *
 * Return: power raised to exp : integer
 */
unsigned int power(unsigned int base, unsigned int exp)
{
	unsigned int pow;

	pow = 1;
	if (exp == 0)
	{
		return (pow);
	}

	while (exp--)
	{
		pow *= base;
	}
	return (pow);
}
