#include <stdio.h>
/*
 * main - driver function
 * prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
printf("\n");
return (0);
}

