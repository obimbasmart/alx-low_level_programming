#include <stdio.h>
/**
 * print_numbers - print integer 0-9
 * Return: void
 */
void print_numbers()
{
int i;
i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n');
}
