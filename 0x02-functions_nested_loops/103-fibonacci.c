#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of even valued
 * fibonacci number less than 400000
 * Return: 0
 */
int main(void)
{
    unsigned long int next;
    unsigned long int fn;
    unsigned long int fn_1;
    unsigned long int sum;
    int i;
    fn = 1;
    fn_1 = 2;
    sum = fn_1;
    for (i = 0; ; i++)
    {
        next = fn + fn_1;
        fn = fn_1;
        fn_1 = next;
        if (next > 4000000)
        {
            break;
        }
        if (next % 2 == 0)
        {
            sum += next;
        }
    }
    printf("%lu\n", sum);
    return (0);
}
