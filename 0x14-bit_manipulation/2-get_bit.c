#include "main.h"

/**
 * get_bit - return the value of a bit at given index
 * @index: index of the bit starting from 0
 *
 * Return: the value of the index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return (n & (1UL << index) ? 1 : 0);
}	
