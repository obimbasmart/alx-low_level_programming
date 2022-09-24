#include <stdio.h>
/**
 * print_most_numbers - print numbers 0 -9, skip  2,4
 * Return: void
 */
void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
{
continue;
}
putchar(i + '0');
}
putchar('\n');
}
