#include <stdio.h>
#include "main.h"
/**
 * print_number -  function that prints an integer
 * @num : the integer
 * Return: void
 */
void print_number(int num)
{
    int n_digit, idx;
    n_digit = getdigitLength(num);
    idx = n_digit - 1;
    if (num < 0)
    {
        unsigned int unum;
        unum = num * -1;
        _putchar('-');
        while (idx >= 0)
        {
            _putchar((unum / power(10, idx)) + '0');
            unum = unum % power(10, idx);
            idx--;
        }
    }
    while (idx >= 0)
    {
        _putchar((num / power(10, idx)) + '0');
        num = num % power(10, idx);
        idx--;
    }
}
/**
 * getdigitLength -  function that returns the number of digits
 * in an integer
 * @num : the integer
 * Return: integer
 */
int getdigitLength(int num)
{
    int n_digit;
    n_digit = 0;
    if (num == 0)
    {
        return (1);
    }
    while (num != 0)
    {
        num = num / 10;
        n_digit++;
    }
    return (n_digit);
}
/**
 * power -  function that returns the power
 * @base: the base
 * @exp: the index
 * Return: integer
 */
int power(int base, int exp)
{
    int power, idx;
    idx = 0;
    power = 1;
    while (idx < exp)
    {
        power = power *base;
        idx++;
    }
    return (power);
}
