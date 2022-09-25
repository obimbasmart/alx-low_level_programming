#include <stdio.h>
/**
 * print_square - prints a square
 * @size : size of the square
 * Return: void
 */
void print_square(int size)
{
int l, w;
for (w = 0; w < size; w++)
{
for (l = 0; l < size; l++)
{
putchar('#');
}
if (w == (size - 1))
{
break;
}
putchar('\n');
}
putchar('\n');
}
