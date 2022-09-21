#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table starting from 0
 * Return: void
 */
void times_table(void)
{
int next_result;
int i = 0;
while (i < 10)
{
int j = 0;
while (j < 10)
{
int re = i * j;
next_result = i * (j + 1);
if (re > 9)
{
putchar((re / 10) + '0');
putchar((re % 10) + '0');
}
else
{
putchar(re + '0');
}
if (j != 9)
{
if (next_result > 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar(',');
putchar(' ');
putchar(' ');
}
}
j++;
}
putchar('\n');
i++;
}
}
