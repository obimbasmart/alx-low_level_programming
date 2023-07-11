#include "main.h"

/**
 * get_endianness - checks the endianess of a system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	Endianess_check ec;

	ec.i = 1;

	if (ec.c[0] == 1) /* little endian */
		return (1);

	return (0); /* big endiann */
}
