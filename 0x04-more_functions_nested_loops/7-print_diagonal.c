#include <stdio.h>
/**
 * print_diagonal - draw a diagonal line in terminal
 * @n : the number of '\' chars to print
 * Return: void
 */
void print_diagonal(int n)
{
int i;
int k;
i = 0;
while (i < n)
{
if (n <= 0)
{
putchar('\n');
break;
}
k = 0;
while (k < i)
{
putchar(' ');
k++;
}
putchar('\\');
putchar('\n');
i++;
}
}
