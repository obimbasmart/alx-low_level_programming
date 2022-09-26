#include <stdio.h>
/**
 * print_triangle - prints a triangle
 * @size : size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int hashCounter, spaceCounter;
hashCounter = 1;
spaceCounter = size;
int space;
int hash;
if (size <= 0)
{
putchar('\n');
}
while (hashCounter <= size && spaceCounter > 0)
{
space = 1;
hash = 0;
while (space < spaceCounter)
{
putchar(' ');
space++;
}
while (hash < hashCounter)
{
putchar('#');
hash++;
}
hashCounter++;
spaceCounter--;
putchar('\n');
}
}
