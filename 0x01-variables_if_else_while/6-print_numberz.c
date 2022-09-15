#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
int i;
char numbers[] = "0123456789";
for (i = 0; i <= 9; i++)
{
putchar(numbers[i]);
}
putchar('\n');
return (0);
}
