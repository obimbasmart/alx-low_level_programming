#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary reps. of an integer
 * @n: integer number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, has_seen_a_1;
	unsigned long int bit_position;

	has_seen_a_1 = 0;
	for (i = 63; i >= 32; i = i - 1)
	{
		bit_position = (1 << i);
		if ((n & bit_position) > 0)
		{
			has_seen_a_1 = 1;
		}

		if (has_seen_a_1)
		{
			putchar((n & bit_position) > 0 ? '1' : '0');
		}

	}
	if (!has_seen_a_1)
	{
		putchar('0');
	}

}
