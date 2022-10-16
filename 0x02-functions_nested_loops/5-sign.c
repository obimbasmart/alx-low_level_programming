#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of a number
 * @num : int character to test
 * Return: 0 if number is greater than 0,  false < 0
 */
int print_sign(int num)
{
    if (num > 0)
    {
        _putchar('+');
        return (1);
    }
    else if (num == 0)
    {
        _putchar('0');
        return (0);
    }
    _putchar('-');
    return (-1);
}
