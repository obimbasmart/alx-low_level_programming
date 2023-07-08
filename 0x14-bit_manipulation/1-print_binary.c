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
	int has_seen_a_1, idx;

	has_seen_a_1 = 0;
	idx = 63;

	while (idx >= 0)
	{
		if ((n >> idx) & 1UL)	/* if we encounter a 1 */
			has_seen_a_1 = 1;

		if (has_seen_a_1) /* this signifies that we
					* have encountered a 1 and
					* can start printing
					*/
			putchar(((n >> idx) & 1UL) ? '1' : '0');

		idx--;
	}

	if (!has_seen_a_1) /* if we end up not seeing a 1,
				* then it's a zero binary digit
				*/
		putchar('0');
}
