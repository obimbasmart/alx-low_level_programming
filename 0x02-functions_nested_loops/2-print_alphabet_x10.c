#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
    int i;
    int j;
    char alphas[] = "abcdefghijklmnopqrstuvwxyz";
    for (j = 0; j < 10; j++)
    {
        for (i = 0; i <= 25; i++)
        {
            _putchar(alphas[i]);
        }
        _putchar('\n');
    }
}
