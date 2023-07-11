#include "main.h"

/**
 * flip_bits - return the number of bits needed to get
 * from one number (n) to another (m) or vise versa
 * @n: integer number
 * @m: integer number
 *
 * Return: integer: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nXorm, count;

	nXorm = n ^ m;
	count = 0;

	while (nXorm > 0)
	{
		count++;
		nXorm &= (nXorm - 1);
	}
	return (count);
}
