#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: the index starting from 0
 * @n: integer number
 *
 * Return: 1 if it worked -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
