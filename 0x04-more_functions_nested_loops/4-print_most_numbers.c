#include <stdio.h>
/**
 * print_most_numbers - print integer 0-9, skip 2, 4
 * Return: void
 */
void print_most_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
if (i == 2 || i == 4)
{
continue;
}
putchar(i + '0');
i++;
}
putchar('\n');
}
