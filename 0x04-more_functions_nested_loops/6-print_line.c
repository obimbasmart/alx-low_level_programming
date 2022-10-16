#include <stdio.h>
/**
 * print_line - draw a straight line in terminal
 * @n : the number of _ chars to print
 * Return: void
 */
void print_line(int n)
{
    int i;
    i = 0;
    while (i < n)
    {
        if (n <= 0)
        {
            break;
        }
        putchar('_');
        i++;
    }
    putchar('\n');
}
