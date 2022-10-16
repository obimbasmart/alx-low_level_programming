#include <stdio.h>
/**
 * print_alphabet - print alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
    int i;
    char alphas[] = "abcdefghijklmnopqrstuvwxyz";
    for (i = 0; i <= 25; i++)
    {
        putchar(alphas[i]);
    }
    putchar('\n');
}
