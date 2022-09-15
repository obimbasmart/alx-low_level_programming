#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
int i;
for (i = 48; i <= 102; i++)
{
if (i > 57 && i < 97)
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
