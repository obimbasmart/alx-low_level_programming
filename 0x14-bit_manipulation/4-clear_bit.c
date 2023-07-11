#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: integer number
 * @index: index starting from 0
 *
 * Return: 1 if it worked, -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= (~(1UL << index));
	return (1);
}
