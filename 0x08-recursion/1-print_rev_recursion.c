#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @str: string
 * Return: void
 */
void _print_rev_recursion(char *str)
{
	unsigned int idx;

	idx = 0;
	if (*str)
	{
		_print_rev_recursion(&str[idx + 1]);
		_putchar(str[idx]);
	}
}

