#include <stdio.h>
/*
 * print_array - print n elements of an array of integers
 * @str : the string
 * @n : the number of elements to print
 * Return: void
 */
void print_array(char *str, int n)
{
int idx;
idx = 0;
while (idx < n)
{
printf("%d", str[idx]);
if (idx != (n - 1))
{
putchar(',');
putchar(' ');
}
idx++;
}
putchar('\n');
}

