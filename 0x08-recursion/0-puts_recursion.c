#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	unsigned int idx;

	idx = 0;
	if (s[idx] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[idx]);
	_puts_recursion(&s[idx + 1]);
}
