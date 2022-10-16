#include <stdio.h>
#include "main.h"
/**
 * _abs - compute the absolute value of a number
 * @num : number to convert
 * Return: 0 if false 1 if true
 */
int _abs(int num)
{
    if (num < 0)
    {
        num  = num * -1;
    }
    return (num);
}
