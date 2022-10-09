#include <stdio.h>
/**
 * _print_rev_recursion - print a string in reverse order
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
unsigned int idx;
idx = 0;
if (*s)
{
_print_rev_recursion(&s[idx + 1]);
printf("%c", *s);
}
}
