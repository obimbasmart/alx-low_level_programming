#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of a number
 * @num : int character to test
 * Return: 0 if number is greater than 0,  false < 0
 */
int print_last_digit(int num)
{
int last_digit;
last_digit = num % 10;
_putchar(last_digit + '0');
return last_digit;
}
