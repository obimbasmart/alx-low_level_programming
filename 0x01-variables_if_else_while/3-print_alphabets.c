#include <stdio.h>
/**
 * main - driver function
 * Return: 0
 */
int main(void)
{
int i;
char alphas[] = "abcdefghijklmnopqrstuvwxyz";
char ualphas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (i = 0; i <= 25; i++)
{
putchar(alphas[i]);
}
for (i = 0; i <= 25; i++)
{
putchar(ualphas[i]);
}
putchar('\n');
return (0);
}
