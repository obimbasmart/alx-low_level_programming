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
	if (n == 1)
	{
		printf("%d", 1);
		return;
	}
	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	print_binary(n / 2);
	printf("%lu", n % 2);
}
