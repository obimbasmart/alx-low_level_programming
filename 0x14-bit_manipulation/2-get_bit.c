#include "main.h"

/**
 * get_bit - return the value of a bit at given index of a number
 * @index: index of the bit starting from 0
 * @n: integer number
 * Return: the value of the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63) /* invalid index */
		return (-1);

	return (n & (1UL << index) ? 1 : 0);
}
