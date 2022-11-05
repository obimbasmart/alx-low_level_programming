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

	has_seen_a_1 = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1UL)
		{
			has_seen_a_1 = 1;
		}

		if (has_seen_a_1)
		{
			putchar((n >> i) & 1UL ? '1' : '0');
		}

	}
	if (!has_seen_a_1)
	{
		putchar('0');
	}

}
