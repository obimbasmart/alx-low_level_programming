#include <stdio.h>
#include "main.h"
/**
* main - print the first 98 fibonacci numbers
* Return: 0
*/
int main(void)
{
    unsigned long int next;
    unsigned long int fn;
    unsigned long int fn_1;
    int i;
    fn = 1;
    fn_1 = 2;
    printf("%lu, %lu, ", fn, fn_1);
    for (i = 0; i < 96; i++)
    {
        next = fn + fn_1;
        fn = fn_1;
        fn_1 = next;
        if (i != 95)
        {
            printf("%lu, ", next);
        }
        else
        {
            printf("%lu", next);
        }
    }
    putchar('\n');
    return (0);
}
