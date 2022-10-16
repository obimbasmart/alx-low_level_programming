#include <stdio.h>
/**
 * more_numbers - print the numbers 0 -14
 * from 0 to 14, followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
    int i;
    int num;
    i = 0;
    while (i < 10)
    {
        for (num = 0; num < 15; num++)
        {
            if (num > 9)
            {
                putchar((num / 10) + '0');
            }
            putchar((num % 10) + '0');
        }
        putchar('\n');
        i++;
    }
}
