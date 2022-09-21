#include <stdio.h>
#include "main.h"
/**
* times_table - prints the 9 times table starting from 0
* Return: void
*/
void print_times_table(int n)
{
int next_result;
int i;
i = 0;
if (n > 15 || n < 0)
{
return;
}
while (i <= n)
{
int j = 0;
while (j <= n)
{
int re = i * j;
next_result = i * (j + 1);
if (j != n)
{
if (next_result < 10)
{
printf("%d,   ", re);
}
else if (next_result < 100)
{
printf("%d,  ", re);
}
else
{
printf("%d, ", re);
}
}
else
{
printf("%d", re);
}
j++;
}
putchar('\n');
i++;
}
}
